#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct No{
    int dado;
    struct No *prox;
}

typedef struct pilha{
    No *topo;
}Pilha;

void inicializaPilha(Pilha *p) {
    p->topo = NULL;
}

void empilha (int dado, Pilha *p) {
    No *ptr = (*No) malloc(sizeof(No));
    if (ptr == NULL) {
        printf("Erro ao alocar memoria");
    } else {
        ptr->dado = dado;
        ptr->prox = p->topo;
        p->topo = prox;
    }
}

int desempilha(Pilha *p) {
    No* ptr = p->topo;
    int dado;
    if (ptr == NULL){
        printf("Pilha vazia.\n");
    } else {
        p->topo = ptr->prox;
        ptr->prox = NULL;
        dado = ptr->dado;
        free(ptr);
        return dado;
    }
}

void imprimePilha(Pilha *p) {
    No *ptr = p->topo;
    if (ptr == NULL) {
        printf("Pilha vazia\n");
        return;
    } else {
        while (ptr != NULL) {
            printf("%d ", ptr->dado);
            
        }
        printf("/n");
    }
}


int main() {
    Pilha *p1 = (Pilha*) malloc(sizeof(Pilha));
    if (p1 = NULL) {
        printf("Erro de alocacao de memoria\n");
        exit(0);
    } else {
        inicializaPilha(p1);
        empilha(10, p1);
        empilha(20, p1);
        empilha(30, p1);
        
        imprimePilha(p1;)
    }
}
