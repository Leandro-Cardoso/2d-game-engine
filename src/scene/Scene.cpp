#include "scene/Scene.hpp"

void Scene::addEntity(
    std::unique_ptr<Entity> entity
) {
    entities.push_back(
        std::move(entity)
    );
}
