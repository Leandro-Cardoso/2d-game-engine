#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

class Renderer {
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    TTF_Font* font;

public:
    Renderer();

    bool init(const char* title, int width, int height);
    void clear();
    void present();
    void shutdown();

    void drawRect(int x, int y, int w, int h);
    void drawText(const char* text, int x, int y);
};
