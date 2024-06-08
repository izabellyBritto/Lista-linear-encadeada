# Trabalho - Lista Linear Encadeada - Pilha

Este é um programa que simula o histórico de navegação de um navegador web utilizando uma estrutura de pilha implementada com uma lista encadeada. O programa permite adicionar URLs ao histórico, voltar para a página anterior e exibir o histórico completo.

## Funcionalidades

O sistema simula as operações básicas de um navegador web com as seguintes funcionalidades:

1. **Visitar uma nova página:** Adiciona um novo URL ao topo da pilha de histórico.
2. **Voltar à página anterior:** Remove o URL do topo da pilha e exibe o URL que agora está no topo.
3. **Exibir o histórico de navegação:** Lista todos os URLs presentes na pilha de histórico, do mais recente ao mais antigo.
4. **Sair do navegador:** Encerra o programa.

## Requisitos do Sistema

O sistema deve satisfazer os seguintes requisitos:

### Adicionar uma nova página ao histórico (push):

- Implementar uma função para adicionar um novo URL ao topo da pilha.
- A função deve receber como parâmetros o endereço do ponteiro para o topo da pilha e o URL a ser adicionado.

### Voltar à página anterior (pop):

- Implementar uma função para remover o URL do topo da pilha.
- A função deve receber como parâmetro o endereço do ponteiro para o topo da pilha.
- A função deve exibir uma mensagem apropriada se a pilha estiver vazia.

### Exibir o histórico de navegação:

- Implementar uma função para exibir todos os URLs da pilha.
- A função deve receber como parâmetro o ponteiro para o topo da pilha.

## Interação com o Usuário

O programa permite que o usuário escolha entre as seguintes opções:

1. Visitar uma nova página.
2. Voltar à página anterior.
3. Exibir o histórico.
4. Sair do navegador.

Um menu é utilizado para facilitar a navegação das opções pelo usuário.
