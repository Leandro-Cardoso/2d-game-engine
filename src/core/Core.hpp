#pragma once

#include "../scene/Scene.hpp"
#include "../renderer/Renderer.hpp"
#include "../input/InputManager.hpp"

class Core {
private:
    bool running;
    Scene* currentScene;
    Renderer renderer;
    InputManager input;

public:
    Core();

    void init();
    void run();
    void shutdown();

    void setScene(Scene* scene);
};
