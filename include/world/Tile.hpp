#pragma once

class Tile {
private:
    int id;
    bool solid;

public:
    Tile(
        int id = 0,
        bool solid = false
    );

    int getId() const;

    bool isSolid() const;
};
