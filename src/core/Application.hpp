#pragma once

#include "Log.hpp"
#include <memory>

namespace Engine {

    class Application {
    public:
        Application();
        virtual ~Application();

        void Run();

    private:
        bool m_Running = true;
        // TODO: Adicionar o Window, o Renderer, ...
    };

    Application* CreateApplication();
}
