#pragma once

#include <SDL2/SDL.h>

class Texture {
private:
    SDL_Texture* texture;

public:
    Texture();

    ~Texture();

    SDL_Texture* get();

    void set(
        SDL_Texture* tex
    );
};
