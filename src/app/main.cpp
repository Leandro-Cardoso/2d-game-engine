#include <memory>

#include "core/Core.hpp"
#include "scene/MainMenuScene.hpp"

int main(
    int argc,
    char* argv[]
) {
    Core core;

    core.init();

    core.setScene(
        std::make_unique<MainMenuScene>()
    );

    core.run();

    core.shutdown();

    return 0;
}
