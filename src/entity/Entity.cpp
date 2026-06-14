#include "entity/Entity.hpp"
#include "input/InputManager.hpp"

Entity::Entity()
    : active(true)
{
}

void Entity::update() {}

void Entity::render(Renderer&) {}

bool Entity::isActive() const {
    return active;
}

void Entity::setActive(bool value) {
    active = value;
}

Vector2 Entity::getPosition() const {
    return position;
}

void Entity::setPosition(float x, float y) {
    position.x = x;
    position.y = y;
}

Vector2 Entity::getVelocity() const {
    return velocity;
}

void Entity::setVelocity(
    float x,
    float y
) {
    velocity.x = x;
    velocity.y = y;
}
