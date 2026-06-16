#pragma once

#include "entity/Entity.hpp"
#include "world/TileMap.hpp"

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

    void tryMove(
        int dx,
        int dy,
        TileMap& map
    );
};
