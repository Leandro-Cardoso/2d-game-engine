#include <Engine.h>

class Sandbox : public Engine::Application {
public:
    Sandbox() {
        EN_INFO("Sandbox criada! O Log do cliente funciona.");
    }

    ~Sandbox() {
    }
};

// Aqui o "Jogo" diz para a "Engine" qual classe deve ser instanciada
Engine::Application* Engine::CreateApplication() {
    return new Sandbox();
}
