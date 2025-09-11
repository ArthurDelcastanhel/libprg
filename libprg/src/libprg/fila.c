#include <stdbool.h>
#include <stdlib.h>
#include "libprg/libprg.h"


typedef struct fila {
    int* elementos;
    int inicio;
    int fim;
    int tamanho;
    int capacidade;
} fila_t;

fila_t* criar_fila(int capacidade) {

    fila_t* f= malloc(sizeof(fila_t));

    f->elementos = malloc(capacidade * sizeof(int));

    f->inicio = 0;
    f->fim = 0;
    f->tamanho = 0;
    f->capacidade = capacidade;

    return f;
}


void enfileirar(fila_t* fila, int valor) {

    if (cheia(fila)) {
        exit(EXIT_FAILURE);
    }

    fila->elementos[fila->fim] = valor;
    fila->fim = (fila->fim + 1) % fila->capacidade;
    fila->tamanho++;



}

// desenfileirar
// inicio
// fim
// tamanho
// vazio
bool cheia(fila_t fila) {
    if (fila.tamanho >= fila.capacidade) {
        return true;
    }
    else {
        return false;
    };
}
// destruir_fila