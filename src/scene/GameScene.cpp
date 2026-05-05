#include <iostream>

#include "GameScene.hpp"
#include "../core/Core.hpp"
#include "MainMenuScene.hpp"

void GameScene::update(InputManager& input, Core& core) {

    // ESC - Menu:
    if (input.isKeyJustPressed(SDL_SCANCODE_ESCAPE)) {
        std::cout << "Voltando ao menu...\n";
        core.setScene(new MainMenuScene());
    }
}

void GameScene::render(Renderer& renderer) {

    // Tela de jogo:
    renderer.drawRect(250, 150, 300, 200);
}
