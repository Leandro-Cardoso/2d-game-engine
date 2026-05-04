#include "../core/Core.hpp"
#include "../scene/TestScene.hpp"

// COMPILAR:
// g++ src/app/main.cpp src/core/Core.cpp src/scene/TestScene.cpp -o build/game.exe

int main() {
    Core core;

    core.init();
    core.setScene(new TestScene());
    core.run();
    core.shutdown();

    return 0;
}
