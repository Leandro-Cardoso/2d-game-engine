#pragma once

#include "Scene.hpp"

class TestScene : public Scene {
public:
    void update() override;
    void render(Renderer& renderer) override;
};
