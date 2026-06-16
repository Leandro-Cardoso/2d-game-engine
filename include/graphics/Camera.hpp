#pragma once

class Camera {
private:
    int x;
    int y;

    int width;
    int height;

public:
    Camera();

    void setPosition(
        int x,
        int y
    );

    int getX() const;
    int getY() const;

    void follow(
        int targetX,
        int targetY
    );
};
