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

bool TileMap::isSolid(
    int x,
    int y
) const
{
    int col = x / tileSize;
    int row = y / tileSize;

    if (
        row < 0 ||
        row >= static_cast<int>(map.size())
    )
    {
        return true;
    }

    if (
        col < 0 ||
        col >= static_cast<int>(map[row].size())
    )
    {
        return true;
    }

    return map[row][col] == '1';
}
