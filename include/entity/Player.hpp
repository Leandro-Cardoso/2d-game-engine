#pragma once

#include "entity/Entity.hpp"

class Player : public Entity {
private:
    float speed;

public:
    Player();

    void update() override;

    void render(
        Renderer& renderer
    ) override;

    void move(
        float dx,
        float dy
    );
};
