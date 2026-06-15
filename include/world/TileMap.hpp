#pragma once

#include <vector>

#include "renderer/Renderer.hpp"

class TileMap {
private:
    int width;
    int height;
    int tileSize;

    std::vector<int> tiles;

public:
    TileMap();

    void create(
        int width,
        int height,
        int tileSize
    );

    void setTile(
        int x,
        int y,
        int id
    );

    int getTile(
        int x,
        int y
    ) const;

    void render(
        Renderer& renderer
    );
};
