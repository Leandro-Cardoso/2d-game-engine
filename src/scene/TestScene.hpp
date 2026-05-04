#pragma once

#include "Scene.hpp"

class TestScene : public Scene {
public:
    void update(InputManager& input) override;
    void render(Renderer& renderer) override;
};
