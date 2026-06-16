#include "physics/Collider.hpp"

Collider::Collider()
    : size(0, 0)
{
}

Collider::Collider(
    float width,
    float height
)
    : size(width, height)
{
}

Vector2 Collider::getSize() const {
    return size;
}

float Collider::getWidth() const
{
    return size.x;
}

float Collider::getHeight() const
{
    return size.y;
}

void Collider::setSize(
    float width,
    float height
) {
    size.x = width;
    size.y = height;
}
