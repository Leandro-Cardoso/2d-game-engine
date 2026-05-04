#pragma once

#include <SDL2/SDL.h>

class Renderer {
private:
    SDL_Window* window;
    SDL_Renderer* renderer;

public:
    Renderer();

    bool init(const char* title, int width, int height);
    void clear();
    void present();
    void shutdown();

    void drawRect(int x, int y, int w, int h);
};
