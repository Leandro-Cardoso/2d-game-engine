#pragma once

#include "../scene/Scene.hpp"
#include "../renderer/Renderer.hpp"

class Core {
private:
    bool running;
    Scene* currentScene;
    Renderer renderer;

public:
    Core();

    void init();
    void run();
    void shutdown();

    void setScene(Scene* scene);
};
