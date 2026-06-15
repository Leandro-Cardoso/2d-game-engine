#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

class Texture;

class Renderer {
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    TTF_Font* font;

public:
    Renderer();

    bool init(
        const char* title,
        int width,
        int height
    );

    void clear();

    void present();

    void drawRect(
        int x,
        int y,
        int w,
        int h
    );

    void drawText(
        const std::string& text,
        int x,
        int y
    );

    void drawTexture(
        Texture& texture,
        int x,
        int y,
        int w,
        int h
    );

    SDL_Renderer* getSDLRenderer();

    void shutdown();
};
