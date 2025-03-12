#include "sequencial_queue.h"
#include <iostream>
#include <fstream>
#include <string>

void processarArquivo(const std::string& arquivoEntrada, const std::string& arquivoSaida, FilaSequencial& fila) {
    std::ifstream entrada(arquivoEntrada);
    std::ofstream saida(arquivoSaida);

    if (!entrada) {
        std::cerr << "Erro ao abrir " << arquivoEntrada << std::endl;
        return;
    }

    char comando;
    int valor;
    while (entrada >> comando) {
        switch (comando) {
            case 'E': { // Enfileirar: comando 'E <valor>'
                entrada >> valor;
                if (fila.enfileira(valor)) {
                    saida << "Elemento " << valor << " enfileirado" << std::endl;
                } else {
                    saida << "Falha ao enfileirar elemento " << valor << std::endl;
                }
                break;
            }
            case 'D': { // Desenfileirar: comando 'D'
                int elemento;
                if (fila.desenfileira(elemento)) {
                    saida << "Elemento " << elemento << " desenfileirado" << std::endl;
                } else {
                    saida << "Falha ao desenfileirar" << std::endl;
                }
                break;
            }
            case 'F': { // Frente: comando 'F'
                int frente = fila.frente();
                if (frente != -1) {
                    saida << "Frente da fila: " << frente << std::endl;
                } else {
                    saida << "Fila vazia, sem elemento na frente" << std::endl;
                }
                break;
            }
            case 'T': { // Tamanho: comando 'T'
                saida << "Tamanho atual da fila: " << fila.getTamanho() << std::endl;
                break;
            }
            case 'V': { // Verifica se vazia: comando 'V'
                saida << "Fila vazia? " << (fila.vazia() ? "Sim" : "Não") << std::endl;
                break;
            }
            case 'C': { // Verifica se cheia: comando 'C'
                saida << "Fila cheia? " << (fila.cheia() ? "Sim" : "Não") << std::endl;
                break;
            }
            case 'P': { // Imprimir elementos da fila: comando 'P'
                fila.imprime(saida);
                break;
            }
            default:
                saida << "Comando inválido: " << comando << std::endl;
                break;
        }
    }

    entrada.close();
    saida.close();
}

int main() {
    // Cria uma fila com capacidade 100
    FilaSequencial fila(100);

    // Processa o arquivo de teste
    processarArquivo("teste.txt", "saida.txt", fila);

    return 0;
}
