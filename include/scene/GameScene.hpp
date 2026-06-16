#pragma once

#include "scene/Scene.hpp"
#include "entity/Player.hpp"
#include "entity/Enemy.hpp"
#include "world/TileMap.hpp"

class Core;

class GameScene : public Scene {
private:
    Player* player;
    Enemy* enemy;

    TileMap map;

public:
    GameScene();

    void initialize(
        Core& core
    );

    void update(
        InputManager& input,
        Core& core
    ) override;

    void render(
        Renderer& renderer
    ) override;

    TileMap& getMap();
};
