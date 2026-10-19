#include <stdio.h>
#include <stdlib.h>

struct No{
    int valor;
    struct No *prox;
    struct No *ant;
};

void inserirInicio(struct No **head, int x){
    struct No *novo = (struct No*) malloc(sizeof(struct No));
    novo -> valor = x;
    novo -> ant = NULL;
    novo -> prox = *head;
    if(*head != NULL){
        (*head)-> ant = novo;
    }
    *head = novo;
}

void inserirFinal(struct No **head, int x){
    if(*head == NULL){
        *head = novo;
    }
    struct No *novo = malloc(sizeof(struct No));
    novo -> valor = x;
    novo -> ant = NULL;
    novo -> prox = NULL;

    struct No *aux = *head;
    while(aux -> prox != NULL){
        aux = aux -> prox;
    }
    novo -> ant = aux;
    aux -> prox = novo;
}

void listar(struct No *head){
    struct No *aux = head;
    printf("NULL <-> ");
    while(aux != NULL){
        printf("%d <-> ", aux -> valor);
        aux = aux -> prox;
    }
    printf("NULL");
}

int main(){
    struct No *head = NULL;

    inserirInicio(&head, 8);
    inserirInicio(&head, 10);
    inserirInicio(&head, 12);
    inserirInicio(&head, 14);

    // listar(head);

    inserirFinal(&head, 4);
    inserirFinal(&head, 2);
    // inserirFinal(&head, 0);
    listar(head);


    return 0;
}