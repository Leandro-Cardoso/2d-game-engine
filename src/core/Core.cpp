#include <iostream>

#include "Core.hpp"

Core::Core() : running(false), currentScene(nullptr) {}

void Core::init() {
    running = true;
    renderer.init("Engine", 800, 600);
    std::cout << "Engine iniciada\n";
}

void Core::run() {
    while (running) {

        input.update();

        renderer.clear();

        if (currentScene) {
            currentScene->update(input);
            currentScene->render(renderer);
        }

        renderer.present();

        // Parar loop:
        running = false; // Temp.
    }
}

void Core::shutdown() {
    renderer.shutdown();
    std::cout << "Engine encerrada\n";
}

void Core::setScene(Scene* scene) {
    currentScene = scene;
}
