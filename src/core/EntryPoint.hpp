#pragma once
#include "Application.hpp"
#include "Log.hpp"

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv) {
    Engine::Log::Init();
    
    EN_CORE_INFO("Log do Sistema Inicializado!");
    EN_CORE_WARN("Aviso: Engine em fase Alpha.");

    // Cria a aplicação:
    auto app = Engine::CreateApplication();
    
    // Roda o loop principal:
    app->Run();
    
    // Limpa a memória ao fechar:
    delete app;
    
    return 0;
}
