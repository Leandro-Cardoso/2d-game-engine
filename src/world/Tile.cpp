#include "world/Tile.hpp"

Tile::Tile(
    int id,
    bool solid
)
    : id(id),
      solid(solid)
{
}

int Tile::getId() const {
    return id;
}

bool Tile::isSolid() const {
    return solid;
}
