#pragma once

#include "scene/Scene.hpp"

class GameScene : public Scene {
public:
    GameScene();

    void update(
        InputManager& input,
        Core& core
    ) override;

    void render(
        Renderer& renderer
    ) override;
};
