#include "entity/Enemy.hpp"
#include "renderer/Renderer.hpp"

Enemy::Enemy()
{
    position.x = 400;
    position.y = 300;

    collider.setSize(
        50,
        50
    );
}

void Enemy::update()
{
}

void Enemy::render(
    Renderer& renderer
)
{
    Entity::render(renderer);
}
