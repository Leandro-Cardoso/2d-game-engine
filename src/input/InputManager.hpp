#pragma once

#include <SDL2/SDL.h>

class InputManager {
private:
    Uint8 currentState[SDL_NUM_SCANCODES];
    Uint8 previousState[SDL_NUM_SCANCODES];

public:
    InputManager();
    void update();
    bool isKeyPressed(SDL_Scancode key);
    bool isKeyJustPressed(SDL_Scancode key);
};
