#include "../core/Core.hpp"
#include "../scene/TestScene.hpp"

// COMPILAR:
// g++ src/app/main.cpp src/core/Core.cpp src/scene/TestScene.cpp src/renderer/Renderer.cpp -lmingw32 -lSDL2main -lSDL2 -mconsole -o build/game.exe

int main(int argc, char* argv[]) {
    Core core;

    core.init();
    core.setScene(new TestScene());
    core.run();
    core.shutdown();

    return 0;
}
