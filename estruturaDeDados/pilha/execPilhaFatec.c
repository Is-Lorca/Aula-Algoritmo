// Escrever fatec e cetaf

#include <stdio.h>
#include <stdlib.h>

struct No{
    char letra;
    struct No *prox;
};

void push(struct No **topo, char x){
    struct No *novo = (struct No*) malloc(sizeof(struct No));

    if(novo == NULL){
        printf("Erro de memória");
        return;
    }

    novo -> letra = x;
    novo -> prox = *topo;
    *topo = novo;
}

char pop(struct No **topo){
    if(*topo == NULL){
        printf("Lista vazia!");
        return '0';
    }

    struct No *temp = *topo;
    char saida = temp -> letra;

    *topo = (*topo) -> prox;

    free(temp);

    return saida;
}

void listar(struct No *topo){
    struct No *aux = topo;
    while(aux != NULL){
        printf("%c -> ", aux -> letra);
        aux = aux -> prox;
    }
    printf("NULL\n");
}

int main(){
    struct No *topo = NULL;
    struct No *outro = NULL;

    char letraInsert;

    push(&topo, 'f'); // C  |
    push(&topo, 'a'); // E  |
    push(&topo, 't'); // T  | -> Resultado da pilha
    push(&topo, 'e'); // A  |
    push(&topo, 'c'); // F  |
    
    // C E T A F
    // F A T E C

    listar(topo);

    while(topo != NULL){
        letraInsert = pop(&topo);

        push(&outro, letraInsert);
    }

    listar(outro);

    return 0;
}