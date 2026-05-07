#include <cstring>

#include <input/InputManager.hpp>

InputManager::InputManager() {
    memset(currentState, 0, SDL_NUM_SCANCODES);
    memset(previousState, 0, SDL_NUM_SCANCODES);
}

void InputManager::update() {
    SDL_PumpEvents();
    const Uint8* state = SDL_GetKeyboardState(NULL);
    memcpy(previousState, currentState, SDL_NUM_SCANCODES);
    memcpy(currentState, state, SDL_NUM_SCANCODES);
}

bool InputManager::isKeyPressed(SDL_Scancode key) {
    return currentState[key];
}

bool InputManager::isKeyJustPressed(SDL_Scancode key) {
    return currentState[key] && !previousState[key];
}
