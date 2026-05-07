#include <iostream>

#include <core/Core.hpp>

#include <scene/OptionsScene.hpp>
#include <scene/MainMenuScene.hpp>

OptionsScene::OptionsScene() {
    options = {"Fullscreen", "Volume", "Voltar"};
    selectedIndex = 0;

    fullscreen = false;
    volume = 5; // 0 - 10
}

void OptionsScene::update(InputManager& input, Core& core) {

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

        // Fullscreen:
        if (options[selectedIndex] == "Fullscreen") {
            fullscreen = !fullscreen;
            std::cout << "Fullscreen: " << (fullscreen ? "ON\n" : "OFF\n");
        }

        // Volume:
        if (options[selectedIndex] == "Volume") {
            volume++;
            if (volume > 10) volume = 0;

            std::cout << "Volume: " << volume << "\n";
        }

        // Voltar:
        if (options[selectedIndex] == "Voltar") {
            core.setScene(new MainMenuScene());
        }
    }

    // ESC - Menu:
    if (input.isKeyJustPressed(SDL_SCANCODE_ESCAPE)) {
        core.setScene(new MainMenuScene());
    }
}

void OptionsScene::render(Renderer& renderer) {

    int startY = 200;

    for (int i = 0; i < options.size(); i++) {

        int x = 300;
        int y = startY + i * 60;

        // Selecao:
        if (i == selectedIndex) {
            renderer.drawRect(x - 20, y - 5, 10, 40);
        }

        // Item:
        renderer.drawText(options[i].c_str(), x, y);
    }

    // Fullscreen status:
    if (fullscreen) {
        renderer.drawRect(520, 200, 30, 30);
    }

    // Barra de volume:
    for (int i = 0; i < volume; i++) {
        renderer.drawRect(520 + i * 15, 260, 10, 30);
    }
}
