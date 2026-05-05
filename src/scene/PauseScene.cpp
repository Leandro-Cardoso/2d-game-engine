#include <iostream>

#include "PauseScene.hpp"
#include "../core/Core.hpp"

#include "GameScene.hpp"
#include "MainMenuScene.hpp"

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
            core.setScene(new GameScene());
        }

        // Menu Principal:
        if (options[selectedIndex] == "Menu Principal") {
            core.setScene(new MainMenuScene());
        }

        // Sair:
        if (options[selectedIndex] == "Sair") {
            core.quit();
        }
    }

    // ESC - Continuar:
    if (input.isKeyJustPressed(SDL_SCANCODE_ESCAPE)) {
        core.setScene(new GameScene());
    }
}

void PauseScene::render(Renderer& renderer) {

    int startY = 200;

    for (int i = 0; i < options.size(); i++) {

        int x = 300;
        int y = startY + i * 60;

        // Selecao:
        if (i == selectedIndex) {
            renderer.drawRect(x - 10, y - 5, 220, 40);
        }

        // Item:
        renderer.drawText(options[i].c_str(), x, y);
    }
}
