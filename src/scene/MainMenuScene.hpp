#pragma once

#include <vector>
#include <string>

#include "Scene.hpp"

class MainMenuScene : public Scene {
private:
    std::vector<std::string> options;
    int selectedIndex;

public:
    MainMenuScene();

    void update(InputManager& input) override;
    void render(Renderer& renderer) override;
};
