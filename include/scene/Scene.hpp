#pragma once

#include <memory>
#include <vector>

#include "entity/Entity.hpp"

class Renderer;
class InputManager;
class Core;

class Scene {
protected:
    std::vector<
        std::unique_ptr<Entity>
    > entities;

public:
    virtual ~Scene() = default;

    virtual void update(
        InputManager& input,
        Core& core
    ) = 0;

    virtual void render(
        Renderer& renderer
    ) = 0;
};
