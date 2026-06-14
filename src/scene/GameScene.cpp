#include <iostream>
#include <memory>

#include <scene/GameScene.hpp>
#include <core/Core.hpp>

#include <scene/PauseScene.hpp>
#include <scene/GameOverScene.hpp>

void GameScene::update(InputManager& input, Core& core) {

    // ESC - Pause:
    if (input.isKeyJustPressed(SDL_SCANCODE_ESCAPE)) {
        std::cout << "Abrindo menu de pausa...\n";
        core.setScene(
            std::make_unique<PauseScene>()
        );
    }

    // X - Game over:
    if (input.isKeyJustPressed(SDL_SCANCODE_X)) {
        std::cout << "Game over!\n";
        core.setScene(
            std::make_unique<GameOverScene>()
        );
    }
}

void GameScene::render(Renderer& renderer) {

    // Tela de jogo:
    renderer.drawRect(250, 150, 300, 200);
}
