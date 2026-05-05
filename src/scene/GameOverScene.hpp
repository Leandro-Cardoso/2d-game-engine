#pragma once

#include <vector>
#include <string>

#include "Scene.hpp"

class GameOverScene : public Scene {
private:
    std::vector<std::string> options;
    int selectedIndex;

public:
    GameOverScene();

    void update(InputManager& input, Core& core) override;
    void render(Renderer& renderer) override;
};
