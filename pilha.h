#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
    #define LIMPAR_TELA "cls"
#else
    #define LIMPAR_TELA "clear"
#endif

typedef struct No{
    char* texto;
    struct No* prox;
} No;

typedef struct Pilha{
    No* topo;
} Pilha;

Pilha* criar_pilha();
void push(Pilha* pi, const char* texto);
char* pop(Pilha* pi);
void display(Pilha* pi);
void limparPilha(Pilha* pi);
int estaVazia(Pilha* pi);
void limpar_buffer();
int contarItens(Pilha* pi);

#endif
