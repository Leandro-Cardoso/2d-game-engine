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

SDL_Texture* Texture::get() {
    return texture;
}

void Texture::set(
    SDL_Texture* tex
) {
    texture = tex;
}
