#include <iostream>

#include "GameScene.hpp"
#include "../core/Core.hpp"
#include "PauseScene.hpp"

void GameScene::update(InputManager& input, Core& core) {

    // ESC - Pause:
    if (input.isKeyJustPressed(SDL_SCANCODE_ESCAPE)) {
        std::cout << "Abrindo menu de pausa...\n";
        core.setScene(new PauseScene());
    }
}

void GameScene::render(Renderer& renderer) {

    // Tela de jogo:
    renderer.drawRect(250, 150, 300, 200);
}
