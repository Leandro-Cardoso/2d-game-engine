#include <iostream>

#include "MainMenuScene.hpp"
#include "../input/InputManager.hpp"
#include "../core/Core.hpp"
#include "GameScene.hpp"

MainMenuScene::MainMenuScene() {
    options = {"Novo Jogo", "Opcoes", "Sair"};
    selectedIndex = 0;
}

void MainMenuScene::update(InputManager& input, Core& core) {

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

    if (input.isKeyJustPressed(SDL_SCANCODE_RETURN)) {

        // Novo Jogo:
        if (options[selectedIndex] == "Novo Jogo") {
            std::cout << "Iniciar jogo...\n";
            core.setScene(new GameScene());
        }

        // Opcoes:
        if (options[selectedIndex] == "Opcoes") {
            std::cout << "Abrir opcoes...\n";
        }

        // Sair:
        if (options[selectedIndex] == "Sair") {
            std::cout << "Saindo...\n";
            core.quit();
        }
    }
}

void MainMenuScene::render(Renderer& renderer) {

    int startY = 200;

    for (int i = 0; i < options.size(); i++) {

        int x = 300;
        int y = startY + i * 50;

        // selecao:
        if (i == selectedIndex) {
            renderer.drawRect(x - 20, y - 10, 200, 40);
        }

        // simulando texto:
        renderer.drawRect(x, y, 150, 30);
    }
}
