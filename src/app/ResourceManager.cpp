#include "core/ResourceManager.hpp"

std::shared_ptr<Texture>
ResourceManager::getTexture(
    const std::string& path
) {

    auto it = textures.find(path);

    if (it != textures.end()) {
        return it->second;
    }

    auto texture =
        std::make_shared<Texture>();

    textures[path] = texture;

    return texture;
}

void ResourceManager::clear() {
    textures.clear();
}
