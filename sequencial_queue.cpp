#include "sequencial_queue.h"

FilaSequencial::FilaSequencial(int cap) : capacidade(cap), tamanho(0), inicio(0), fim(0) {
    dados = new int[capacidade];
}

FilaSequencial::~FilaSequencial() {
    delete[] dados;
}

bool FilaSequencial::vazia() const {
    return (tamanho == 0);
}

bool FilaSequencial::cheia() const {
    return (tamanho == capacidade);
}

int FilaSequencial::getTamanho() const {
    return tamanho;
}

bool FilaSequencial::enfileira(int elemento) {
    if (cheia())
        return false;
    
    dados[fim] = elemento;
    fim = (fim + 1) % capacidade;
    tamanho++;
    return true;
}

bool FilaSequencial::desenfileira(int &elemento) {
    if (vazia())
        return false;
    
    elemento = dados[inicio];
    inicio = (inicio + 1) % capacidade;
    tamanho--;
    return true;
}

int FilaSequencial::frente() const {
    if (vazia())
        return -1;
    return dados[inicio];
}

void FilaSequencial::imprime(std::ostream &out) const {
    if (vazia()) {
        out << "Fila vazia" << std::endl;
        return;
    }
    out << "Fila: ";
    for (int i = 0; i < tamanho; i++) {
        int idx = (inicio + i) % capacidade;
        out << dados[idx] << " ";
    }
    out << std::endl;
}
