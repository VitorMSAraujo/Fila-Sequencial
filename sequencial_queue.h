#ifndef SEQUENCIAL_QUEUE_H
#define SEQUENCIAL_QUEUE_H

#include <iostream>
#include <fstream>

class FilaSequencial {
private:
    int* dados;        // Vetor para armazenar os elementos
    int capacidade;    // Capacidade total da fila
    int tamanho;       // Número atual de elementos na fila
    int inicio;        // Índice do primeiro elemento (frente da fila)
    int fim;           // Índice para a próxima inserção (posição após o último elemento)
public:
    FilaSequencial(int capacidade);
    ~FilaSequencial();

    bool vazia() const;     // Retorna true se a fila estiver vazia
    bool cheia() const;     // Retorna true se a fila estiver cheia
    int getTamanho() const; // Retorna o número de elementos na fila

    bool enfileira(int elemento);           // Insere elemento no final da fila
    bool desenfileira(int &elemento);         // Remove o elemento da frente, retornando-o via parâmetro
    int frente() const;                     // Retorna o elemento da frente (ou -1 se a fila estiver vazia)

    void imprime(std::ostream &out) const;  // Imprime os elementos da fila (do início ao fim)
};

#endif
