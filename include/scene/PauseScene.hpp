#pragma once

#include <vector>
#include <string>

#include <scene/Scene.hpp>

class PauseScene : public Scene {
private:
    std::vector<std::string> options;
    int selectedIndex;

public:
    PauseScene();

    void update(InputManager& input, Core& core) override;
    void render(Renderer& renderer) override;
};
