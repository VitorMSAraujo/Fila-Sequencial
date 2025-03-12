# Fila Sequencial em C++ 🚀

Este projeto implementa uma fila sequencial utilizando um vetor com capacidade fixa e o conceito de fila circular. O programa executa operações de enfileiramento, desenfileiramento, consulta do elemento da frente, verificação do tamanho da fila e outras funcionalidades, conforme definido nos comandos de um arquivo de teste.

## 📂 Arquivos do Projeto

- **main.cpp**  
  Contém a função `main()` que processa os comandos do arquivo de entrada (`teste.txt`) e gera um arquivo de saída (`saida.txt`) com os resultados das operações na fila.

- **sequencial_queue.h**  
  Declara a classe `FilaSequencial`, definindo atributos e métodos para gerenciar a fila.

- **sequencial_queue.cpp**  
  Implementa os métodos declarados em `sequencial_queue.h`, como enfileirar, desenfileirar, retornar o elemento da frente e imprimir os elementos da fila.

- **teste.txt**  
  Arquivo de entrada com os comandos para operações na fila.  
  Exemplos de comandos:
  - `E <valor>`: Enfileira um elemento.
  - `D`: Desenfileira o elemento da frente.
  - `F`: Exibe o elemento da frente.
  - `T`: Mostra o tamanho atual da fila.
  - `V`: Verifica se a fila está vazia.
  - `C`: Verifica se a fila está cheia.
  - `P`: Imprime os elementos da fila.

- **Makefile**  
  Arquivo para compilação do projeto. Facilita a geração do executável e a execução do programa.

## ⚙️ Pré-requisitos

- **Compilador C++** com suporte a C++11 (por exemplo, g++).
- **Make** para utilizar o Makefile.

## 🔨 Compilação

Para compilar o projeto, abra o terminal no diretório raiz do repositório e execute:

```bash
make
```

Isso gerará um executável chamado `fila`.

## ▶️ Execução

Após a compilação, execute o programa com:

```bash
make run
```

Ou diretamente:

```bash
./fila
```

O programa processa o arquivo `teste.txt` e gera o arquivo `saida.txt` com os resultados das operações realizadas na fila.

## 📑 Funcionamento

A classe `FilaSequencial` implementa os seguintes métodos:

- **enfileira(int elemento)**: Insere um novo elemento no final da fila.
- **desenfileira(int &elemento)**: Remove o elemento da frente da fila e o retorna.
- **frente()**: Retorna o elemento que está na frente da fila (ou -1 se a fila estiver vazia).
- **imprime(std::ostream &out)**: Imprime os elementos da fila do início ao fim.
- **vazia()** e **cheia()**: Verificam se a fila está vazia ou cheia, respectivamente.
- **getTamanho()**: Retorna o número atual de elementos na fila.




