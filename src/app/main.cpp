#include "../core/Core.hpp"

// COMPILAR:
// g++ src/app/main.cpp src/core/Core.cpp -o build/game.exe

int main() {
    Core core;

    core.init();
    core.run();
    core.shutdown();

    return 0;
}
