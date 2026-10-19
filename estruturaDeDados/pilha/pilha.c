#include <stdio.h>
#include <stdlib.h>

// LIFO -> Last in, First Out -> ultimo a entrar, primeiro a sair

// Push -> insere elemento / Pop -> retira elemento / 
// Top -> Topo da pilha / isEmpty -> checa se esta vazia

// Estouro de pilha -> Underflow (em baixo) e Overflow (em cima) -> quando 
// tentamos tirar ou colocar muito mais do que cabe na pilha

struct No{
    int valor;
    struct No *prox;
};

// inserir na Pilha
void push(struct No **topo, int x){
    struct No *novo = (struct No*) malloc(sizeof(struct No));
    novo -> valor = x;
    novo -> prox = *topo;
    *topo = novo;
}

// retirar da Pilha
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
    printf("Topo -> ");

    while(aux != NULL){
        printf("%d -> ", aux -> valor);
        aux = aux -> prox;
    }
    printf("NULL\n");
}

int main(){
    struct No *topo = NULL;

    push(&topo, 10);
    push(&topo, 5);
    push(&topo, 0);

    listar(topo);

    pop(&topo);
    pop(&topo);

    listar(topo);

    return 0;
}