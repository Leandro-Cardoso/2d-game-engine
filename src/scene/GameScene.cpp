#include <iostream>
#include <memory>

#include <scene/GameScene.hpp>
#include <core/Core.hpp>

#include <scene/PauseScene.hpp>
#include <scene/GameOverScene.hpp>

#include <entity/Player.hpp>

GameScene::GameScene()
{
    auto p =
        std::make_unique<Player>();

    player = p.get();

    addEntity(
        std::move(p)
    );
}

void GameScene::update(InputManager& input, Core& core) {
    // Entities:
    for (auto& entity : entities) {
        entity->update();
    }

    // ESC - Pause:
    if (input.isKeyJustPressed(SDL_SCANCODE_ESCAPE)) {
        std::cout << "Abrindo menu de pausa...\n";
        core.setScene(
            std::make_unique<PauseScene>()
        );
    }

    // X - Game over:
    if (input.isKeyJustPressed(SDL_SCANCODE_X)) {
        std::cout << "Game over!\n";
        core.setScene(
            std::make_unique<GameOverScene>()
        );
    }

    // Player movement:
    if (
        input.isKeyPressed(
            SDL_SCANCODE_UP
        )
    ) {
        player->move(
            0,
            -5
        );
    }

    if (
        input.isKeyPressed(
            SDL_SCANCODE_DOWN
        )
    ) {
        player->move(
            0,
            5
        );
    }

    if (
        input.isKeyPressed(
            SDL_SCANCODE_LEFT
        )
    ) {
        player->move(
            -5,
            0
        );
    }

    if (
        input.isKeyPressed(
            SDL_SCANCODE_RIGHT
        )
    ) {
        player->move(
            5,
            0
        );
    }
}

void GameScene::render(Renderer& renderer) {
    // Entities:
    for (auto& entity : entities) {
        entity->render(renderer);
    }
}
