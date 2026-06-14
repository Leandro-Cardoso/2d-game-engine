#pragma once

#include "entity/Entity.hpp"

class Enemy : public Entity {
public:
    Enemy();

    void update() override;

    void render(
        Renderer& renderer
    ) override;
};
