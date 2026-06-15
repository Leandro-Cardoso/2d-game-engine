#pragma once

#include <string>

#include <SDL2/SDL.h>

class Texture {
private:
    SDL_Texture* texture;

public:
    Texture();

    ~Texture();

    bool load(
        SDL_Renderer* renderer,
        const std::string& path
    );

    SDL_Texture* getSDLTexture();

    void set(
        SDL_Texture* tex
    );
};
