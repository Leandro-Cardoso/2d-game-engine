# Fast Core

## Definitions

### Name:
- Fast Core ?
- Fast Game Core (FGC) ?

### Project Scope:

#### Objetivo:
Desenvolver uma engine 2D modular em C++ com suporte a renderização via tiles e arquitetura ECS.

#### Funcionalidades Principais (In-scope):
- Gerenciamento de janelas e eventos (Input).
- Sistema de renderização otimizado (Sprite Batching).
- Arquitetura baseada em Componentes (ECS).
- Carregamento de mapas externos (formato JSON/TMX).
- Persistência de dados (Sistema de Save/Load via JSON).

#### Limitações (Out-of-scope):
- Não haverá suporte a 3D ou iluminação dinâmica complexa.
- O suporte a áudio será via biblioteca externa (não desenvolvido do zero).
- Não será desenvolvido um editor visual (GUI) completo, apenas ferramentas de debug.

## Dev Guide

### Estrutura:
    GameEngine/
    ├── assets/             # Texturas, mapas, fontes
    ├── bin/                # Executáveis gerados
    ├── build/              # Arquivos gerados pelo CMake
    ├── docs/               # Documentação técnica
    ├── external/           # Bibliotecas (GLFW, Glad, EnTT, nlohmann_json)
    ├── include/            # Headers (.h / .hpp)
    ├── src/                # Implementações (.cpp)
    │   ├── core/           # Application, Log, Input, Timestep
    │   ├── renderer/       # SpriteBatch, Texture, Shader, Camera
    │   ├── scene/          # Entity, Component, System (ECS)
    │   └── utils/          # Math, FileSystem, Serialization
    ├── tests/              # Testes unitários
    ├── sandbox/            # Onde você testa a engine criando um "mini-jogo"
    └── CMakeLists.txt      # Script de automação de build

### Steps:
- **Fase 1**: Core & Window
    - **Logging**: Implemente um sistema de log (ex: spdlog) para debugar a engine no console.
    - **Window Abstraction**: Crie uma classe abstrata Window e uma implementação WindowsWindow usando GLFW. Isso prova que sua engine é modular.
    - **Game Loop**: Implemente um loop com Timestep (Delta Time) para que a física não dependa do FPS.
- **Fase 2**: O Sistema de Renderização 2D
    - **Shaders**: Crie uma classe para carregar e compilar códigos GLSL.
    - **Texture Atlas**: Para tiles, a engine deve carregar uma imagem grande e calcular coordenadas UV.
    - **Sprite Batcher**: Esta é a parte "C++ Master". Você deve criar um buffer de vértices dinâmico para enviar milhares de tiles para a GPU em um único comando.
- **Fase 3**: ECS & Scene Graph
    - **Entidades**: Use a biblioteca EnTT. É o padrão ouro para ECS em C++.
    - **Y-Sorting**: No sistema de renderização, implemente uma ordenação por Position.y antes de desenhar.

### Storege:
Para um TCC, usar binário puro é difícil de debugar. Recomendo o uso de JSON (via biblioteca nlohmann/json) por ser legível e profissional.

- **A**. Configurações da Engine
Crie um arquivo config.json para resolução, fullscreen, e volume. A engine lê isso no Init().
- **B**. Sistema de Tiles (Mapas)
Não invente um formato de mapa agora. Use o formato .tmx do editor Tiled. Sua engine deve ter um MapParser que lê o XML/JSON do Tiled e popula as entidades no ECS.
- **C**. Inventário e Status
No ECS, o Inventário é apenas um Componente.
- **D**. Sistema de Save
Para salvar, você usa a Serialização.
    1. Percorra todas as entidades com o componente Persistent.
    2. Converta os dados (posição, vida, inventário) para JSON.
    3. Grave em um arquivo .sav.

### Diferencial:
- **Smart Pointers**: Evite new e delete. Use std::unique_ptr e std::shared_ptr.
- **Event System**: Em vez de checar o teclado em todo lugar, crie um sistema de eventos onde a janela "avisa" quem estiver interessado que uma tecla foi pressionada.
- **Profiler**: Crie uma ferramenta simples (pode ser via std::chrono) que mede quanto tempo cada sistema (Physics, Render) leva para rodar.
- **Ferramentas de Debug**: Integre a ImGui. Ela permite criar janelas dentro do jogo para editar a posição do jogador ou o estado do inventário em tempo real.

### Cronograma:
- **Mês 1**: Janela, Logs e Renderização de um triângulo (Core).
- **Mês 2**: SpriteBatcher e carregamento de Texturas (Renderer).
- **Mês 3**: Integração do ECS (EnTT) e movimentação de câmera.
- **Mês 4**: Sistema de Tiles (Carregamento de mapas) e Colisão.
- **Mês 5**: UI, Save/Load e polimento do "Sandbox".

### Novas Idéias:
- Gerador de labirintos.
- Dungeon Generator.
    - Definir area geral.  
    - Salas:
    - Definir numero de salas.
    - Definir tamanho minimo e maximo.
    - Verificar se o espaço está ocupado.
    - Desenhar.
    - Corredores:
    - Pega posição aleatoria.
    - Verifica os visinhos.
    - Escolhe um aleatorio que não tem parede.
    - Quando não tiver visinhos ele verifica toda a matriz.
    - Pega o primeiro vazio.
    - Verifica se ha paredes.
    - Conecta aleatoria mente com uma parede visinha.
    - Repete tudo até não haver mais espaço.

## Run

