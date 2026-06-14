#include "entity/Entity.hpp"

void Entity::update() {
}

void Entity::render(
    Renderer&
) {
}

Vector2 Entity::getPosition() const {
    return position;
}

void Entity::setPosition(
    float x,
    float y
) {
    position.x = x;
    position.y = y;
}
