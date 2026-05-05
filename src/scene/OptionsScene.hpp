#pragma once

#include <vector>
#include <string>

#include "Scene.hpp"

class OptionsScene : public Scene {
private:
    std::vector<std::string> options;
    int selectedIndex;

    // estados das opções
    bool fullscreen;
    int volume;

public:
    OptionsScene();

    void update(InputManager& input, Core& core) override;
    void render(Renderer& renderer) override;
};
