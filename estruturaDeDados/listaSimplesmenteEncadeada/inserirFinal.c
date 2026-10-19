#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *prox;
};

void inserirInicio(struct No **head, int x){
    struct No *novo = malloc(sizeof(struct No));
    novo -> valor = x;
    novo -> prox = *head;
    *head = novo;
}

void inserirFinal(struct No **head, int x){
    struct No *novo = malloc(sizeof(struct No)); // cria nova estrutura
    novo -> valor = x; // coloca o valor dele
    novo -> prox = NULL; // ele deve apontar para null

    if (*head == NULL){ // se a lista estiver vazia
        *head = novo; // coloque o head no novo
    }

    struct No *aux = *head; // cria um auxiliar
    while(aux -> prox != NULL){ // enquanto o ponteiro do auxiliar não for null, continue
        aux = aux -> prox; // o auxiliar passa para a posição do proximo do auxiliar
    }
    aux -> prox = novo; // o auxiliar aponta o proximo dele para o novo

    // ou seja:
    // *head
    // 10   -> 20 -> null   | criamos novo: 30 -> null
    
    // *aux
    // *head
    // 10    -> 20 -> null

    // *head    *aux
    // 10    -> 20   -> null
    
    // *head    *aux (muda ponteiro p/ novo)
    // 10    -> 20                          -> 30 -> null
}

void imprimirLista(struct No *head){
    struct No *aux = head;
    while(aux != NULL){
        printf("%d -> ", aux -> valor);
        aux = aux -> prox;
    }
    printf("NULL\n");
}

int main(){
    struct No *head = NULL;

    return 0;
}