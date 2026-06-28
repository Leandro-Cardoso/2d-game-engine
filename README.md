# 2D Game Engine

## Resumo

Está documentação apresenta o desenvolvimento de uma game engine 2D implementada em
C++, destinada à criação de jogos baseados em tiles com visão top-down. O projeto tem
como objetivo estruturar uma arquitetura modular e performática, minimizando a
dependência de bibliotecas externas e proporcionando maior controle sobre
gerenciamento de memória, renderização gráfica e organização de recursos. A pesquisa
caracteriza-se como aplicada e exploratória, fundamentada em revisão bibliográfica
sobre engenharia de software, padrões de projeto e arquitetura de sistemas. A
metodologia adotada envolve modelagem arquitetural, implementação incremental dos
módulos da engine e validação por meio da construção de um protótipo funcional de jogo.
São abordados aspectos como sistema de renderização 2D, gerenciamento de
entidades, controle de colisões e administração de assets. Como resultado esperado,
busca-se obter uma engine leve, especializada e de fácil utilização para jogos
estruturados em mapas compostos por tiles, contribuindo para o aprofundamento
acadêmico em arquitetura de software e otimização de desempenho em aplicações
gráficas.

**Palavras-chave:** game engine; C++; arquitetura de software; jogos 2D; desempenho.

### [➤ Abrir Documentação](https://leandro-cardoso.github.io/2d-game-engine/) ⚙️

## 📄 Documentos para Praticas Extensionistas Integradoras VI:

* [Introdução e Metodologia](https://github.com/Leandro-Cardoso/2d-game-engine/blob/main/docs/assets/pdf/INTRODUCAO-DO-PROJETO.pdf)
* [Artigo](https://github.com/Leandro-Cardoso/2d-game-engine/blob/main/docs/assets/pdf/PEI-DESENVOLVIMENNTO-DE-GAME-ENGINE-2D-EM-CPP.pdf)

## 📄 Documentos

* [PITCH](https://github.com/Leandro-Cardoso/2d-game-engine/blob/main/docs/assets/pdf/PITCH-Desenvolvimento-de-uma-Game-Engine-2D-em-C.pdf)
* [Termo de Abertura de Projeto](https://github.com/Leandro-Cardoso/2d-game-engine/blob/main/docs/assets/pdf/TAP-Termo_de_Abertura_de_Projeto.pdf)
* [Documento de Requisitos](https://github.com/Leandro-Cardoso/2d-game-engine/blob/main/docs/assets/pdf/DOCUMENTO-DE-REQUISITOS.pdf)
* [Documento de Arquitetura de Software](https://github.com/Leandro-Cardoso/2d-game-engine/blob/main/docs/assets/pdf/DOCUMENTO-DE-ARQUITETURA-DE-SOFTWARE.pdf)
* [Plano de Gerenciamento do Projeto](https://github.com/Leandro-Cardoso/2d-game-engine/blob/main/docs/assets/pdf/PLANO-DE-GERENCIAMENTO-DO-PROJETO.pdf)
* [Documentação](https://leandro-cardoso.github.io/2d-game-engine/) ⚙️
* Artigo Acadêmico ⚙️

## ⚙️ Fases de Desenvolvimento

### Fase 8 - Testes e Validação

* ✓ Criação do prototipo funcional.
* ✓ Testes de desempenho.
* Correção de inconsistencias.

### ⚙️ Fase 9 - Documentação Final

* Revisão do TCC.
* Consolidação de diagramas.
* Preparação para entrega.

## ✨ Features

Em desenvolvimento.

## ⚙️ Requisitos

- C++ 17+
- CMake 3.10+
- Compiladores compatíveis:
    - GCC
    - Clang
    - MSVC
- Bibliotecas externas:
    - SDL2
    - SDL2_TTF

## 🚀 Build e instalação

1. Clone

```bash
git clone https://github.com/Leandro-Cardoso/2d-game-engine/
cd 2d-game-engine
```

2. Configuração

```bash
cmake -S . -B build -G "MinGW Makefiles" -DCMAKE_INSTALL_PREFIX=dist
```

3. Gerar build

```bash
cmake --build build
```

4. Instalar

```bash
cmake --install build
```
## ▶️ Executar exemplos

Em desenvolvimento.

## 📌 Exemplos

Em desenvolvimento.

## 🧪 Executar testes

```bash
cd build
ctest
```

Ou:

```bash
cd build
.\tests.exe
```

## 📄 Licença

[MIT License](https://github.com/Leandro-Cardoso/2d-game-engine/blob/main/LICENSE)
