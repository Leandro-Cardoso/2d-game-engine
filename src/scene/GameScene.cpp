#include <iostream>

#include "GameScene.hpp"
#include "../core/Core.hpp"

#include "PauseScene.hpp"
#include "GameOverScene.hpp"

void GameScene::update(InputManager& input, Core& core) {

    // ESC - Pause:
    if (input.isKeyJustPressed(SDL_SCANCODE_ESCAPE)) {
        std::cout << "Abrindo menu de pausa...\n";
        core.setScene(new PauseScene());
    }

    // X - Game over:
    if (input.isKeyJustPressed(SDL_SCANCODE_X)) {
        std::cout << "Game over!\n";
        core.setScene(new GameOverScene());
    }
}

void GameScene::render(Renderer& renderer) {

    // Tela de jogo:
    renderer.drawRect(250, 150, 300, 200);
}
