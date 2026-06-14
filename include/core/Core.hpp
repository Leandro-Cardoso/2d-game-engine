#pragma once

#include <memory>

#include "renderer/Renderer.hpp"
#include "input/InputManager.hpp"
#include "core/ResourceManager.hpp"
#include "scene/Scene.hpp"

class Core {
private:
    bool running;

    Renderer renderer;

    InputManager input;

    ResourceManager resourceManager;

    std::unique_ptr<Scene> currentScene;

public:
    Core();

    void init();

    void run();

    void shutdown();

    void quit();

    void setScene(
        std::unique_ptr<Scene> scene
    );

    Renderer& getRenderer();

    InputManager& getInput();

    ResourceManager& getResourceManager();
};
