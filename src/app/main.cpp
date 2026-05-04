#include "../core/Core.hpp"

int main() {
    Core core;

    core.init();
    core.run();
    core.shutdown();

    return 0;
}
