#pragma once

#include "../scene/Scene.hpp"

class Core {
private:
    bool running;
    Scene* currentScene;

public:
    Core();

    void init();
    void run();
    void shutdown();

    void setScene(Scene* scene);
};
