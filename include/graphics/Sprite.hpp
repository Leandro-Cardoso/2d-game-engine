#pragma once

#include <memory>

#include "graphics/Texture.hpp"

class Sprite {
private:
    std::shared_ptr<Texture> texture;

    int width;
    int height;

public:
    Sprite();

    void setTexture(
        std::shared_ptr<Texture> tex
    );

    std::shared_ptr<Texture>
    getTexture();

    int getWidth() const;

    int getHeight() const;

    void setSize(
        int width,
        int height
    );
};
