#include <iostream>
#include <string>

#include <SDL2/SDL_image.h>

#include "graphics/Texture.hpp"

Texture::Texture()
    : texture(nullptr)
{
}

Texture::~Texture() {
    if (texture) {
        SDL_DestroyTexture(texture);
    }
}

SDL_Texture* Texture::getSDLTexture()
{
    return texture;
}

void Texture::set(
    SDL_Texture* tex
) {
    texture = tex;
}

bool Texture::load(
    SDL_Renderer* renderer,
    const std::string& path
) {
    SDL_Surface* surface =
        IMG_Load(path.c_str());

    if (!surface) {
        std::cout
            << "Erro carregando: "
            << path
            << "\n";

        return false;
    }

    texture =
        SDL_CreateTextureFromSurface(
            renderer,
            surface
        );

    SDL_FreeSurface(surface);

    if (!texture) {
        std::cout
            << "Erro criando textura\n";

        return false;
    }

    std::cout
        << "Carregado: "
        << path
        << "\n";

    return true;
}
