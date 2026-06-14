#pragma once

#include "math/Vector2.hpp"
#include "graphics/Sprite.hpp"
#include "physics/Collider.hpp"

class Renderer;

class Entity {
protected:
    Vector2 position;

    Sprite sprite;

    Collider collider;

public:
    virtual ~Entity() = default;

    virtual void update();

    virtual void render(
        Renderer& renderer
    );

    Vector2 getPosition() const;

    void setPosition(
        float x,
        float y
    );
};
