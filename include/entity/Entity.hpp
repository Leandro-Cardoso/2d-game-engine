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
    bool active;

public:
    Entity();
    virtual ~Entity() = default;

    virtual void update();
    virtual void render(Renderer& renderer);

    bool isActive() const;
    void setActive(bool value);

    Vector2 getPosition() const;
    void setPosition(float x, float y);
};
