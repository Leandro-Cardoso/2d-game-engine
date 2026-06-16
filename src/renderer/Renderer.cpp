#include <iostream>

#include <renderer/Renderer.hpp>
#include <graphics/Texture.hpp>

Renderer::Renderer() : window(nullptr), renderer(nullptr) {}

bool Renderer::init(const char* title, int width, int height) {
    // Janela:
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) != 0) {
        std::cout << "Erro SDL\n";
        return false;
    }
    SDL_SetHint(SDL_HINT_WINDOWS_ENABLE_MESSAGELOOP, "1");

    window = SDL_CreateWindow(
        title,
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        width,
        height,
        SDL_WINDOW_SHOWN
    );

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    // Fonte:
    TTF_Init();
    font = TTF_OpenFont("assets/fonts/JetBrainsMono.ttf", 24);
    if (!font) {
        std::cout << "Erro ao carregar fonte\n";
    }

    return true;
}

void Renderer::clear() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
}

void Renderer::present() {
    SDL_RenderPresent(renderer);
}

SDL_Renderer*
Renderer::getSDLRenderer()
{
    return renderer;
}

void Renderer::shutdown() {
    // Fonte:
    TTF_CloseFont(font);
    TTF_Quit();

    // Tela:
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

// Retangulo:
void Renderer::drawRect(int x, int y, int w, int h) {
    SDL_Rect rect = {x, y, w, h};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect);
}

// Texto:
void Renderer::drawText(const std::string& text, int x, int y) {
    SDL_Color color = {255, 255, 255};

    SDL_Surface* surface = TTF_RenderUTF8_Solid(font, text.c_str(), color);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);

    SDL_Rect dst = {x, y, surface->w, surface->h};

    SDL_RenderCopy(renderer, texture, NULL, &dst);

    SDL_FreeSurface(surface);
    SDL_DestroyTexture(texture);
}

// Textura:
void Renderer::drawTexture(
    Texture& texture,
    int x,
    int y,
    int w,
    int h
) {
    SDL_Rect dst = {
        x,
        y,
        w,
        h
    };

    SDL_RenderCopy(
        renderer,
        texture.getSDLTexture(),
        nullptr,
        &dst
    );
}

void Renderer::setColor(
    Uint8 r,
    Uint8 g,
    Uint8 b,
    Uint8 a
) {
    SDL_SetRenderDrawColor(
        renderer,
        r,
        g,
        b,
        a
    );
}
