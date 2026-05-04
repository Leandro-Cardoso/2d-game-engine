#include <iostream>

#include "TestScene.hpp"
#include "../renderer/Renderer.hpp"

extern Renderer renderer; // Temp.

void TestScene::update() {
    std::cout << "Atualizando cena...\n";
}

void TestScene::render(Renderer& renderer) {
    std::cout << "Renderizando cena...\n";
    renderer.drawRect(300, 200, 200, 100);
}
