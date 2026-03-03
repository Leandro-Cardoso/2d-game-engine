#include "Application.hpp"

namespace Engine {

    Application::Application() {
        Log::Init();
        EN_CORE_INFO("Engine Inicializada!");
    }

    Application::~Application() {
        EN_CORE_WARN("Encerrando Engine...");
    }

    void Application::Run() {
        EN_CORE_TRACE("Iniciando Game Loop...");

        while (m_Running) {
            // Update Delta Time.
            // Processar Inputs.
            // Update dos Sistemas (ECS).
            // Renderização.
            
            // Exemplo temporário para não travar o PC:
            // if (janela_fechou) m_Running = false;
        }
    }
}
