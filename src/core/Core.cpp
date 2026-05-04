#include <iostream>

#include "Core.hpp"

Core::Core() : running(false), currentScene(nullptr) {}

void Core::init() {
    running = true;
    std::cout << "Engine iniciada\n";
}

void Core::run() {
    while (running) {

        if (currentScene) {
            currentScene->update();
            currentScene->render();
        }

        // Parar loop:
        running = false;
    }
}

void Core::shutdown() {
    std::cout << "Engine encerrada\n";
}

void Core::setScene(Scene* scene) {
    currentScene = scene;
}
