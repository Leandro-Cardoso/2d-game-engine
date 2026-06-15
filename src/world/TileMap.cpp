#include "world/TileMap.hpp"

TileMap::TileMap()
    : width(0),
      height(0),
      tileSize(32)
{
}

void TileMap::create(
    int width,
    int height,
    int tileSize
) {
    this->width = width;
    this->height = height;
    this->tileSize = tileSize;

    tiles.resize(
        width * height,
        0
    );
}

void TileMap::setTile(
    int x,
    int y,
    int id
) {
    tiles[
        y * width + x
    ] = id;
}

int TileMap::getTile(
    int x,
    int y
) const {
    return tiles[
        y * width + x
    ];
}

void TileMap::render(
    Renderer& renderer
) {
    for (
        int y = 0;
        y < height;
        y++
    ) {
        for (
            int x = 0;
            x < width;
            x++
        ) {
            int tile =
                getTile(x, y);

            if (tile == 0)
                continue;

            renderer.drawRect(
                x * tileSize,
                y * tileSize,
                tileSize,
                tileSize
            );
        }
    }
}
