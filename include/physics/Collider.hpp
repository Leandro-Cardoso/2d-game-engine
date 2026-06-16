#pragma once

#include "math/Vector2.hpp"

class Collider {
private:
    Vector2 size;

public:
    Collider();

    Collider(float width, float height);

    Vector2 getSize() const;

    float getWidth() const;

    float getHeight() const;

    void setSize(
        float width,
        float height
    );
};
