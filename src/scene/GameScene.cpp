#include <iostream>
#include <memory>

#include <scene/GameScene.hpp>
#include <core/Core.hpp>

#include <scene/PauseScene.hpp>
#include <scene/GameOverScene.hpp>

#include <entity/Player.hpp>
#include <entity/Enemy.hpp>

GameScene::GameScene()
{
    // PLAYER:
    auto p = std::make_unique<Player>();

    player = p.get();

    player->setPosition(
        100,
        100
    );

    player->getSprite().setSize(
        64,
        64
    );

    addEntity(
        std::move(p)
    );

    // ENEMY:
    auto e =
        std::make_unique<Enemy>();

    enemy = e.get();

    enemy->setPosition(
        400,
        300
    );

    enemy->getSprite().setSize(
        64,
        64
    );

    addEntity(
        std::move(e)
    );

    // MAP:
    map.create(
        25,
        18,
        32
    );

    for (int x = 0; x < 25; x++) {
        map.setTile(x, 0, 1);

        map.setTile(
            x,
            17,
            1
        );
    }

    for (int y = 0; y < 18; y++) {
        map.setTile(
            0,
            y,
            1
        );

        map.setTile(
            24,
            y,
            1
        );
    }
}

void GameScene::initialize(
    Core& core
) {
    std::cout << "GameScene::initialize() executado\n";
    
    auto playerTexture =
        core.getResourceManager()
            .getTexture(
                "assets/textures/player.png"
            );

    playerTexture->load(
        core.getRenderer()
            .getSDLRenderer(),
        "assets/textures/player.png"
    );

    player->getSprite()
          .setTexture(
              playerTexture
          );

    auto enemyTexture =
        core.getResourceManager()
            .getTexture(
                "assets/textures/enemy.png"
            );

    enemyTexture->load(
        core.getRenderer()
            .getSDLRenderer(),
        "assets/textures/enemy.png"
    );

    enemy->getSprite()
         .setTexture(
             enemyTexture
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
    // Map:
    map.render(renderer);

    // Entities:
    for (auto& entity : entities) {
        entity->render(renderer);
    }
}
