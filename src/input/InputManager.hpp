#pragma once

#include <SDL2/SDL.h>

class InputManager {
private:
    const Uint8* keyboardState;

public:
    void update();
    bool isKeyPressed(SDL_Scancode key);
};
