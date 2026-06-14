#pragma once

#include "math/Vector2.hpp"
#include "graphics/Sprite.hpp"
#include "physics/Collider.hpp"

class Renderer;
class InputManager;

class Entity {
protected:
    Vector2 position;
    Vector2 velocity;

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
    Vector2 getVelocity() const;
    void setVelocity(float x, float y);
};
