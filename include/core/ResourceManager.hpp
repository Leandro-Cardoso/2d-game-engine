#pragma once

#include <memory>
#include <string>
#include <unordered_map>

#include "graphics/Texture.hpp"

class ResourceManager {
private:

    std::unordered_map<
        std::string,
        std::shared_ptr<Texture>
    > textures;

public:

    ResourceManager() = default;
    ~ResourceManager() = default;

    std::shared_ptr<Texture> getTexture(
        const std::string& path
    );

    void clear();
};
