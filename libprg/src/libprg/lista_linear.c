#include "libprg/libprg.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

lista_linear_t *criar_lista_linear(int capacidade) {
    lista_linear_t *lista = malloc(sizeof(lista_linear_t));

    lista->elementos = malloc(capacidade * sizeof(int));
    lista->tamanho = 0;
    lista->capacidade = capacidade;

    return lista;
}
//inserir
//buscar
//remover
//vazio
//cheia
//destruir
