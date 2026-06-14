#include <iostream>
#include <memory>
#include <SDL2/SDL.h>

#include <core/Core.hpp>

Core::Core() : running(false), currentScene(nullptr) {}

void Core::init() {
    running = true;

    renderer.init(
        "2D Game Engine",
        800,
        600
    );
}

void Core::run() {
    while (running) {

        input.update();

        renderer.clear();

        if (currentScene) {

            currentScene->update(
                input,
                *this
            );

            currentScene->render(
                renderer
            );
        }

        renderer.present();
    }
}

void Core::shutdown() {
    resourceManager.clear();

    renderer.shutdown();
}

void Core::setScene(
    std::unique_ptr<Scene> scene
) {
    currentScene =
        std::move(scene);
}

void Core::quit() {
    running = false;
}

Renderer& Core::getRenderer() {
    return renderer;
}

InputManager& Core::getInput() {
    return input;
}

ResourceManager&
Core::getResourceManager() {
    return resourceManager;
}
