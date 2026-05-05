#pragma once

#include "Scene.hpp"

class GameScene : public Scene {
public:
    void update(InputManager& input, Core& core) override;
    void render(Renderer& renderer) override;
};
