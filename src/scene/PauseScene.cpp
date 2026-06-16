#include <iostream>
#include <memory>

#include <scene/PauseScene.hpp>
#include <core/Core.hpp>

#include <scene/GameScene.hpp>
#include <scene/MainMenuScene.hpp>

PauseScene::PauseScene() {
    options = {"Continuar", "Menu Principal", "Sair"};
    selectedIndex = 0;
}

void PauseScene::update(InputManager& input, Core& core) {

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

        // Continuar:
        if (options[selectedIndex] == "Continuar") {
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

    // ESC - Continuar:
    if (input.isKeyJustPressed(SDL_SCANCODE_ESCAPE)) {
        core.setScene(
            std::make_unique<GameScene>()
        );
    }
}

void PauseScene::render(Renderer& renderer) {

    int startY = 200;

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
