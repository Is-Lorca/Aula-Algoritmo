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

void removerInicio(struct No **head) {
    if (*head == NULL) return; // se a lista tiver com o head apontando para null, significa q esta vazia
    
    struct No *temp = *head; // criamos um ponteiro temp para apontar para o inicio da lista
    *head = (*head)-> prox; // (*head) -> prox = pegue o valor dentro do prox do head
    // *head = (*head) -> prox => passe o head para onde o prox esta apontando
    free(temp);
    // libere a memória onde o temp (o ponteiro temporario) esta
    // ex:
    // *head
    // 1    -> 2 -> 3 -> null

    // *temp
    // *head
    // 1     -> 2 -> 3 -> null
    // (prox -> endereço de 2)

    // *temp    *head
    // -------
    // 1     |  2    -> 3 -> null = lista agora: 2 -> 3 -> null
    // ------
    // free(temp) = apaga o 1, liberando memoria
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

    inserirInicio(&head, 10);
    inserirInicio(&head, 9);
    inserirInicio(&head, 8);
    imprimirLista(head);
    removerInicio(&head);
    imprimirLista(head);
    removerInicio(&head);
    imprimirLista(head);
    removerInicio(&head);
    imprimirLista(head);

    return 0;
}