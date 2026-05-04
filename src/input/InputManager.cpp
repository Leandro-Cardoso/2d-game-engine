#include "InputManager.hpp"

void InputManager::update() {
    SDL_PumpEvents();
    keyboardState = SDL_GetKeyboardState(NULL);
}

bool InputManager::isKeyPressed(SDL_Scancode key) {
    return keyboardState[key];
}
