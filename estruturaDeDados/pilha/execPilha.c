#include <stdio.h>
#include <stdlib.h>

struct No{
    int valor;
    struct No *prox;
};

void push(struct No **topo, int x){
    struct No *novo = (struct No*) malloc(sizeof(struct No));
    novo -> valor = x;
    novo -> prox = *topo;
    *topo = novo;
}

void pop(struct No **topo){
    if(*topo == NULL){
        printf("Lista vazia!");
        return;
    }

    struct No *temp = *topo;
    *topo = (*topo) -> prox;

    free(temp);
}

void listar(struct No *topo){
    struct No *aux = topo;
    while(aux != NULL){
        printf("%d -> ", aux -> valor);
        aux = aux -> prox;
    }
    printf("NULL\n");
}

void top(struct No *topo){
    struct No *aux = topo;
    printf("Topo -> [%d]\n", aux -> valor);
}

int main(){
    struct No *topo = NULL;

    push(&topo, 10);
    push(&topo, 1);
    push(&topo, 93);
    push(&topo, 34);

    listar(topo);

    top(topo);
    pop(&topo);
    top(topo);
    pop(&topo);
    top(topo);
    push(&topo, 25);
    top(topo);

    listar(topo);

    return 0;
}