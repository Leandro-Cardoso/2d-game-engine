#pragma once

#include <string>

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#include "graphics/Camera.hpp"

class Texture;

class Renderer {
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    TTF_Font* font;
    Camera* camera;

public:
    Renderer();

    bool init(
        const char* title,
        int width,
        int height
    );

    void clear();

    void present();

    void drawText(
        const std::string& text,
        int x,
        int y
    );

    void drawRect(
        int x,
        int y,
        int w,
        int h
    );

    void drawRectUI(
        int x,
        int y,
        int w,
        int h
    );

    void drawTexture(
        Texture& texture,
        int x,
        int y,
        int w,
        int h
    );

    void setColor(
        Uint8 r,
        Uint8 g,
        Uint8 b,
        Uint8 a
    );

    void setCamera(
        Camera* camera
    );

    SDL_Renderer* getSDLRenderer();

    void shutdown();
};
