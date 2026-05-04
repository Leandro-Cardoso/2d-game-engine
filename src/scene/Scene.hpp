#pragma once

#include "../renderer/Renderer.hpp"

class Scene {
public:
    virtual ~Scene() = default;

    virtual void update() = 0;
    virtual void render(Renderer& renderer) = 0;
};
