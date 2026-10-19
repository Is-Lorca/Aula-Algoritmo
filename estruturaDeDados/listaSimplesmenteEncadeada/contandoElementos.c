#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *prox; 
}; 

void inserirFinal(struct No **head, int x){
    struct No *novo = malloc(sizeof(struct No)); 
    novo -> valor = x;
    novo -> prox = NULL; 
    if (*head == NULL){ 
        *head = novo; 
    }

    struct No *aux = *head; 
    while(aux -> prox != NULL){ 
        aux = aux -> prox; 
    }
    aux -> prox = novo; 
}

void inserirInicio(struct No **head, int x) { 
    struct No *novo = malloc(sizeof(struct No)); 
    novo -> valor = x;         
    novo -> prox = *head; 
    *head = novo; 
}

void listar(struct No *head){
    struct No *aux = head; 
    while (aux != NULL){ 
        printf("%d -> ", aux -> valor); 
        aux = aux -> prox; 
    }
    printf("NULL\n"); 
}

void contarElementos(struct No **head){
    struct No *aux = *head;
    int contador = 0;
    
    if (aux == NULL){
        printf("A lista encadeada não possui elementos.\n");
    }
    while (aux != NULL){
        contador += 1;
        aux = aux -> prox;
    }
    printf("A lista encadeada possui %d elementos.\n", contador);
}

void procurarValor(struct No **head, int x){
    struct No *aux = *head;
    struct No *aux2 = *head;
    int iguais = 0;
    bool check = false;

    while (aux != NULL){
        if (aux->valor == x){
            check = true;
            while (aux2 != NULL){
                if (aux2->valor == x){
                    iguais +=1;
                }
                aux2 = aux2->prox;
            }
        }
        aux = aux->prox;
    }

    if(check){
        printf("O valor %d existe na lista encadeada.\n", x);
        if(iguais != 1){
            printf("O valor se repete %d vezes.\n", iguais);
        }
        else{
            printf("O valor não se repete na lista.\n");
        }
    }
    else{
        printf("O valor %d não existe na lista encadeada.\n", x);
    }
}

void removerInicio(struct No **head) {
    if (*head == NULL) return;
    
    struct No *temp = *head;
    *head = (*head)-> prox; 
    free(temp);
}

int main(){
    
    struct No *head = NULL; 
    
    inserirInicio(&head, 10);
    inserirInicio(&head, 20);
    inserirInicio(&head, 8);
    inserirInicio(&head, 8);
    inserirFinal(&head, 9);
    inserirFinal(&head, 11);

    
    contarElementos(&head);
    procurarValor(&head, 8);
    procurarValor(&head, 1);
    listar(head);
    
    return 0;
};