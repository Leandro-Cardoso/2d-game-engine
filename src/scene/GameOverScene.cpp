#include <iostream>
#include <memory>

#include <core/Core.hpp>
#include <scene/GameOverScene.hpp>

#include <scene/GameScene.hpp>
#include <scene/MainMenuScene.hpp>

GameOverScene::GameOverScene() {
    options = {"Reiniciar", "Menu Principal", "Sair"};
    selectedIndex = 0;
}

void GameOverScene::update(InputManager& input, Core& core) {

    // Navegacao:
    if (input.isKeyJustPressed(SDL_SCANCODE_DOWN)) {
        selectedIndex++;
        if (selectedIndex >= options.size())
            selectedIndex = 0;
    }

    if (input.isKeyJustPressed(SDL_SCANCODE_UP)) {
        selectedIndex--;
        if (selectedIndex < 0)
            selectedIndex = options.size() - 1;
    }

    // Opcoes:
    if (input.isKeyJustPressed(SDL_SCANCODE_RETURN)) {

        // Reiniciar:
        if (options[selectedIndex] == "Reiniciar") {
            std::cout << "Reiniciando jogo...\n";
            core.setScene(
                std::make_unique<GameScene>()
            );
        }

        // Menu Principal:
        if (options[selectedIndex] == "Menu Principal") {
            core.setScene(
                std::make_unique<MainMenuScene>()
            );
        }

        // Sair:
        if (options[selectedIndex] == "Sair") {
            core.quit();
        }
    }
}

void GameOverScene::render(Renderer& renderer) {

    // Tela de game over:
    // renderer.drawRectUI(0, 0, 800, 600);

    int startY = 250;

    for (int i = 0; i < options.size(); i++) {

        int x = 300;
        int y = startY + i * 60;

        // Selecao:
        if (i == selectedIndex) {
            renderer.drawRectUI(x - 20, y - 5, 10, 40);
        }

        // Item:
        renderer.drawText(options[i].c_str(), x, y);
    }
}
