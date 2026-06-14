#include "entity/Player.hpp"
#include "renderer/Renderer.hpp"

Player::Player()
    : speed(5.0f)
{
    position.x = 100;
    position.y = 100;

    collider.setSize(
        50,
        50
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
) {
    renderer.drawRect(
        static_cast<int>(position.x),
        static_cast<int>(position.y),
        50,
        50
    );
}
