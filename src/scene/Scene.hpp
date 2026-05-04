#pragma once

#include "../renderer/Renderer.hpp"
#include "../input/InputManager.hpp"

class Core;

class Scene {
public:
    virtual ~Scene() = default;

    virtual void update(InputManager& input, Core& core) = 0;
    virtual void render(Renderer& renderer) = 0;
};
