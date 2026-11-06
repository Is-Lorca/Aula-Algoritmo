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

void desfazer(struct No **pilha1, struct No **pilha2){
    if(pilha1 == NULL){
        return;
    }
    
    int numeroNovo = pop(pilha1);
    
    push(pilha2, numeroNovo);
    
    return;
}

void refazer(struct No **pilha1, struct No **pilha2){
    if(pilha2 == NULL){
        return;
    }
    
    int numeroNovo = pop(pilha2);
    
    push(pilha1, numeroNovo);

    return;
}

int main(){
    struct No *pilha1 = NULL;
    struct No *pilha2 = NULL;
     
    push(&pilha1, 9);
    push(&pilha1, 1);
    push(&pilha1, 6);
    push(&pilha1, 4);
    push(&pilha1, 5);
    push(&pilha1, 8);

    printf("Original: ");
    listar(pilha1);
    desfazer(&pilha1, &pilha2);
    printf("Desfaz: ");
    listar(pilha1);
    desfazer(&pilha1, &pilha2);
    printf("Desfaz: ");
    listar(pilha1);
    refazer(&pilha1, &pilha2);
    printf("Refaz: ");
    listar(pilha1);
    desfazer(&pilha1, &pilha2);
    printf("Desfaz: ");
    listar(pilha1);
    desfazer(&pilha1, &pilha2);
    printf("Desfaz: ");
    listar(pilha1);
    refazer(&pilha1, &pilha2);
    printf("Refaz: ");
    listar(pilha1);

    return 0;
}