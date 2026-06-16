#include "graphics/Camera.hpp"

Camera::Camera()
    : x(0),
      y(0),
      width(800),
      height(600)
{
}

void Camera::setPosition(
    int x,
    int y
)
{
    this->x = x;
    this->y = y;
}

int Camera::getX() const
{
    return x;
}

int Camera::getY() const
{
    return y;
}

void Camera::follow(
    int targetX,
    int targetY
)
{
    x = targetX - width / 2;
    y = targetY - height / 2;
}
