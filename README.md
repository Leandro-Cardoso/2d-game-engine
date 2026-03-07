# 2D Game Engine

## Resumo

Este trabalho apresenta o desenvolvimento de uma game engine 2D implementada em
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

## Documentos para Praticas Extensionistas Integradoras VI:

* [Documento do projeto](https://github.com/Leandro-Cardoso/2d-game-engine/blob/main/docs/PEI-DESENVOLVIMENNTO-DE-GAME-ENGINE-2D-EM-CPP.pdf)

## Documentos

* [Documento de Requisitos](https://github.com/Leandro-Cardoso/2d-game-engine/blob/main/docs/DOCUMENTO-DE-REQUISITOS.pdf) ⚙️🔨
* Documento de Arquitetura de Software ⚙️🔨
* [Plano de Gerenciamento do Projeto](https://github.com/Leandro-Cardoso/2d-game-engine/blob/main/docs/PLANO-DE-GERENCIAMENTO-DO-PROJETO.pdf)
* Documentação da API ⚙️🔨
* [Introdução e Metodologia](https://github.com/Leandro-Cardoso/2d-game-engine/blob/main/docs/INTRODUCAO-DO-PROJETO.pdf)
* Artigo do TCC (Sendo elaborada) ⚙️🔨

## Builds

Em desenvolvimento.

## Features

Em desenvolvimento.

## Requisitos

### Funcionais:

* **RF01** – Inicialização da Engine (**Core**)

    A engine deve permitir a inicialização do sistema através de uma interface de programação que configure os componentes principais necessários para execução do jogo.

* **RF02** – Gerenciamento do Loop Principal (**Core**)

    A engine deve fornecer um mecanismo responsável por controlar o loop principal do jogo, incluindo atualização lógica, processamento de entrada e renderização gráfica.

* **RF03** – Renderização de Elementos Gráficos (**Renderer**)

    A engine deve permitir a renderização de sprites e outros elementos gráficos bidimensionais na tela.

* **RF04** – Gerenciamento de Entidades (**Entity System**)

    A engine deve permitir a criação, atualização e remoção de entidades dentro do ambiente do jogo.

* **RF05** – Sistema de Colisão (**Collision System**)

    A engine deve fornecer mecanismos para detecção de colisões entre entidades presentes no ambiente do jogo.

* **RF06** – Gerenciamento de Recursos (**Resource Manager**)

    A engine deve permitir o carregamento e gerenciamento de recursos utilizados pelo jogo, como imagens e arquivos de mapas.

* **RF07** – Sistema de Entrada do Usuário (**Input System**)

    A engine deve capturar e processar eventos de entrada do usuário provenientes de dispositivos como teclado e mouse.

* **RF08** – Estrutura de Cenas (**Scene Manager**)

    A engine deve permitir a organização do jogo em diferentes cenas ou estados, possibilitando a transição entre diferentes contextos do jogo.

* **RF09** – Atualização de Entidades (**Entity System**)

    A engine deve permitir que entidades sejam atualizadas a cada ciclo do loop do jogo, possibilitando o processamento de lógica e comportamento.

* **RF10** – Encerramento do Sistema (**Core**)

    A engine deve fornecer mecanismos para encerramento seguro da execução do jogo e liberação adequada dos recursos utilizados.

### Não Funcionais:

* **RNF01** – Desempenho

    A engine deve ser capaz de manter uma taxa mínima de 60 quadros por segundo em condições normais de execução.

* **RNF02** – Modularidade

    A arquitetura da engine deve ser organizada de forma modular, permitindo que diferentes componentes do sistema sejam desenvolvidos e mantidos de forma independente.

* **RNF03** – Manutenibilidade

    O código-fonte do sistema deve seguir boas práticas de organização e documentação, facilitando sua manutenção e evolução.

* **RNF04** – Portabilidade

    A engine deve ser desenvolvida de forma que possa ser executada em diferentes sistemas operacionais compatíveis com compiladores C++ modernos.

* **RNF05** – Escalabilidade

    A arquitetura do sistema deve permitir a adição de novos módulos e funcionalidades sem necessidade de alterações estruturais significativas.

* **RNF06** – Usabilidade da API

    A API da engine deve apresentar uma interface clara e consistente, facilitando sua utilização por desenvolvedores.

* **RNF07** – Organização do Código

    O código da engine deve ser estruturado em módulos ou componentes claramente definidos, com responsabilidades bem delimitadas.

## Fases de Desenvolvimento

### Fase 1 - Planejamento formal:

* Elaboração do Plano de Gerenciamento. ✓
* Definição da arquitetura inicial.
* Levantamento de requisitos. ✓

### Fase 2 - Medelagem arquitetural

* Modelagem UML (classes e modulos).
* Definição de responsabilidades.
* Estruturação dos pacotes da biblioteca.

### Fase 3 - Implementação do Núcleo (core)

* Estrutura base do projeto.
* Loop principal.
* Sistema de inicialização.

### Fase 4 - Renderização 2D

* Sistema de tiles.
* Carregamento de sprites.
* Renderização em tela.

### Fase 5 - Gerenciamento de Recursos

* Implementação do Resource Manager.
* Controle de carregamento e descarregamento.
* Otimização de memoria.

### Fase 6 - Sistema de Entidades

* Criação da classe base Entity.
* Sistema de atualização.
* Gerenciamento de multiplas entidades.

### Fase 7 - Sistema de Colisão

* Implementação de bounding box.
* Verificação de colisão com mapa.
* Integração com entidades.

### Fase 8 - Testes e Validação

* Criação do prototipo funcional.
* Testes de desempenho.
* Correção de inconsistencias.

### Fase 9 - 

* Revisão do TCC.
* Consolidação de diagramas.
* Preparação para entrega.
