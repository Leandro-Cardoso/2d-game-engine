#include <iostream>
#include <memory>

#include <core/Core.hpp>
#include <scene/MainMenuScene.hpp>

int main(int argc, char* argv[]) {
    Core core;

    core.init();

    core.setScene(
        std::make_unique<MainMenuScene>()
    ); // Tela menu principal.

    core.run();
    core.shutdown();

    return 0;
}
