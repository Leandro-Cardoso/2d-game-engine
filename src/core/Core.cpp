#include <iostream>
#include <SDL2/SDL.h>

#include "Core.hpp"

Core::Core() : running(false), currentScene(nullptr) {}

void Core::init() {
    running = true;
    renderer.init("Engine", 800, 600);
    std::cout << "Engine iniciada\n";
}

void Core::run() {
    SDL_Event event;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
        }
        
        input.update();

        renderer.clear();

        if (currentScene) {
            currentScene->update(input);
            currentScene->render(renderer);
        }

        renderer.present();

        SDL_Delay(16); // 60 FPS
    }
}

void Core::shutdown() {
    renderer.shutdown();
    std::cout << "Engine encerrada\n";
}

void Core::setScene(Scene* scene) {
    currentScene = scene;
}
