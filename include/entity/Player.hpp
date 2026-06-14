#pragma once

#include "entity/Entity.hpp"

class Player : public Entity {
public:
    Player();

    void update() override;

    void render(
        Renderer& renderer
    ) override;
};
