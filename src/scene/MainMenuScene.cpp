#include "MainMenuScene.hpp"
#include "../input/InputManager.hpp"

MainMenuScene::MainMenuScene() {
    options = {"Novo Jogo", "Opcoes", "Sair"};
    selectedIndex = 0;
}

void MainMenuScene::update(InputManager& input) {

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
