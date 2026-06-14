#include "graphics/Sprite.hpp"

Sprite::Sprite()
    : width(0),
      height(0)
{
}

void Sprite::setTexture(
    std::shared_ptr<Texture> tex
) {
    texture = tex;
}

std::shared_ptr<Texture>
Sprite::getTexture() {
    return texture;
}

int Sprite::getWidth() const {
    return width;
}

int Sprite::getHeight() const {
    return height;
}

void Sprite::setSize(
    int width,
    int height
) {
    this->width = width;
    this->height = height;
}
