#include <stdio.h>
#include <stdlib.h>

// Inserindo dados no inicio de uma lista simplesmente encadeada, usando struct
// simplesmente encadeada = aponta apenas para o próximo, não temos informação do interior

// IMPORTANTE: STRUCT FICA ANTES DE TODA E QUALQUER FUNÇÃO
// criamos um nó
struct No {
    int valor;
    struct No *prox; // temos um ponteiro
}; // devemos colocar ; depois de criar o nó

// colocando valor dentro do nó de início da Struct, se executarmos novamente, esse novo será o
// primeiro da lista
void inserirInicio(struct No **head, int x) { // ** ponteiro apontando para ponteiro
    struct No *novo = malloc(sizeof(struct No)); // tamanho alocado = o tamanho da estrutura Nó
    // setinhas indicam ONDE esta sendo armazenado na struct (seria o mesmo que - (No).valor = x)
    novo -> valor = x; // esta transformando o valor, que esta dentro da estrutura novo, 
                       // para valor de x
    novo -> prox = *head; // agora ele apontará para null, pois não sabemos ainda para onde apontar
    *head = novo; // agora, head aponta para o valor do novo (que ainda será inserido)
}

void imprimir(struct No *head){
    struct No *aux = head; // criamos um ponteiro auxiliar que aponta para o head da struct No
    while (aux != NULL){ // enquanto o auxiliar não for null
        printf("%d -> ", aux -> valor); // auxiliar recebe o valor que está na posição em que ele está
                                        // e printa
        aux = aux -> prox; // agora aux aponta para prox, que é o ponteiro que esta dentro da struct No
    }
    printf("NULL\n"); // por fim, printe NULL
}

int main(){
    // Toda lista começa pelo Head, sem valor algum e deve ser inserido no main()
    struct No *head = NULL; 
    
    inserirInicio(&head, 10); //pega o endereço de head e passa como parametro, junto com 10, que sera 
    // inserido no valor
    inserirInicio(&head, 20); // agora os nós são: 20 -> 10 -> null
    inserirInicio(&head, 5); // agora os nós são 5 -> 20 -> 10 -> null
    // o novo head sempre apontará para o head anterior, entao, antes era 10 que apontava para null
    // depois, 20 passou a apontar para 10 que aponta para null, que sempre é o fim da lista
    // por fim, 5 passou a apontar para para 20, que aponta para 10, que aponta para null
    inserirInicio(&head, 8);

    imprimir(head);

    return 0;
};