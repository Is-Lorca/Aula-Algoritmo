#include <stdio.h>
#include <stdlib.h>

struct No{
    int numero;
    struct No *prox;
};

void push(struct No **topo, int x){
    struct No *novo = (struct No*) malloc(sizeof(struct No));

    if(novo == NULL){
        printf("Erro de memória");
        return;
    }

    novo -> numero = x;
    novo -> prox = *topo;
    *topo = novo;
}

int pop(struct No **topo){
    if(*topo == NULL){
        return 0;
    }

    struct No *temp = *topo;
    int saida = temp -> numero;

    *topo = (*topo) -> prox;

    free(temp);

    return saida;
}

void listar(struct No *topo){
    struct No *aux = topo;
    while(aux != NULL){
        printf("%d -> ", aux -> numero);
        aux = aux -> prox;
    }
    printf("NULL\n");
}

int main(){
    struct No *pilha1 = NULL;
    struct No *pilha2 = NULL;
    struct No *pilha3 = NULL;

    int novoNum;

    push(&pilha1, 3);
    push(&pilha1, 7);
    push(&pilha1, 8);
    push(&pilha1, 5);
    push(&pilha1, 10);

    listar(pilha1);

    while(pilha1 != NULL){
        novoNum = pop(&pilha1);

        if(novoNum%2 == 0){
            push(&pilha2, novoNum);
        }
        else{
            push(&pilha3, novoNum);
        }
    }

    listar(pilha2);
    listar(pilha3);

    return 0;
}