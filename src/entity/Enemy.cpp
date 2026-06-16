#include "entity/Enemy.hpp"
#include "renderer/Renderer.hpp"

Enemy::Enemy()
{
    position.x = 960;
    position.y = 960;

    collider.setSize(
        64,
        64
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
