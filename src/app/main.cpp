#include "../core/Core.hpp"
#include "../scene/MainMenuScene.hpp"

// COMPILAR:
// g++ src/app/main.cpp src/core/Core.cpp src/scene/MainMenuScene.cpp src/renderer/Renderer.cpp src/input/InputManager.cpp src/scene/GameScene.cpp src/scene/OptionsScene.cpp src/scene/PauseScene.cpp src/scene/GameOverScene.cpp -lmingw32 -lSDL2main -lSDL2 -mconsole -o build/game.exe

int main(int argc, char* argv[]) {
    Core core;

    core.init();

    core.setScene(new MainMenuScene()); // Tela menu principal.

    core.run();
    core.shutdown();

    return 0;
}
