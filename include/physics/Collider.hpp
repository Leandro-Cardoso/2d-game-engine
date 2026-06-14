#pragma once

#include "math/Vector2.hpp"

class Collider {
private:

    Vector2 size;

public:

    Collider();

    Collider(float width, float height);

    Vector2 getSize() const;

    void setSize(
        float width,
        float height
    );
};
