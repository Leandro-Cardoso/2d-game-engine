#include <fstream>

#include "world/TileMap.hpp"

TileMap::TileMap()
    : tileSize(64)
{
}

bool TileMap::load(
    const std::string& path
) {
    map.clear();

    std::ifstream file(path);

    if (!file.is_open()) {
        return false;
    }

    std::string line;

    while (
        std::getline(
            file,
            line
        )
    ) {
        map.push_back(line);
    }

    return true;
}

void TileMap::render(
    Renderer& renderer
)
{
    for (
        size_t row = 0;
        row < map.size();
        row++
    )
    {
        for (
            size_t col = 0;
            col < map[row].size();
            col++
        )
        {
            if (
                map[row][col]
                == '1'
            )
            {
                renderer.drawRect(
                    col * tileSize,
                    row * tileSize,
                    tileSize,
                    tileSize
                );
            }
        }
    }
}
