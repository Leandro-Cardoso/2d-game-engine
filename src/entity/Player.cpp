#include "entity/Player.hpp"
#include "renderer/Renderer.hpp"

Player::Player()
    : speed(5.0f)
{
    position.x = 100;
    position.y = 100;

    collider.setSize(
        64,
        64
    );
}

void Player::move(
    float dx,
    float dy
) {
    position.x += dx;
    position.y += dy;
}

void Player::update() {
}

void Player::render(
    Renderer& renderer
)
{
    Entity::render(renderer);
}

void Player::tryMove(
    int dx,
    int dy,
    TileMap& map
)
{
    int newX =
        static_cast<int>(position.x) + dx;

    int newY =
        static_cast<int>(position.y) + dy;

    int width =
        collider.getWidth();

    int height =
        collider.getHeight();

    bool collision =
        map.isSolid(newX, newY) ||
        map.isSolid(newX + width - 1, newY) ||
        map.isSolid(newX, newY + height - 1) ||
        map.isSolid(newX + width - 1,
                    newY + height - 1);

    if (!collision)
    {
        move(dx, dy);
    }
}
