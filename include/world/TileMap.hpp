#pragma once

#include <vector>
#include <string>

#include "renderer/Renderer.hpp"

class TileMap {
private:
    std::vector<std::string> map;

    int tileSize;

public:
    TileMap();

    bool load(
        const std::string& path
    );

    void render(
        Renderer& renderer
    );

    bool isSolid(
        int x,
        int y
    ) const;
};
