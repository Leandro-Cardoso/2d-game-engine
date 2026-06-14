#pragma once

#include <memory>

#include <scene/Scene.hpp>
#include <renderer/Renderer.hpp>
#include <input/InputManager.hpp>

class Core {
private:
    bool running;
    std::unique_ptr<Scene> currentScene;
    Renderer renderer;
    InputManager input;

public:
    Core();

    void init();
    void run();
    void shutdown();

    void setScene(std::unique_ptr<Scene> scene);

    void quit();
};
