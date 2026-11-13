// Fila usa 2 ponteiros, inicio e fim, mas dentro do nó só existem 1 ponteiro (proximo -> prox)
#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *prox;
};

// Enqueue = inserir no final (entrar na fila)
void enqueue(struct No **inicio, struct No **fim, int x){
    // criando um novo nó:
    struct No *novo = (struct No*) malloc(sizeof(struct No));
    novo -> valor = x;
    // por ser o último nó, o prox aponta para NULL
    novo -> prox = NULL;

    if(*inicio == NULL){
        *inicio = novo;
        *fim = novo;
    } 
    else{
        (*fim)->prox = novo;
        *fim = novo;
    }
}

// Dequeue = remover do inicio
void dequeue(struct No **inicio, struct No **fim){
    // checamos se esta vazio, caso sim, não realizamos mais nada
    if(*inicio == NULL){
        printf("Fila vazia\n");
        return;
    }

    // caso contrario, criamos um ponteiro auxiliar que apontará para inicio, guardando o nó
    struct No *aux = *inicio;
    // inicio passa a apontar para o próximo valor
    *inicio = (*inicio) -> prox;
    // o nó antigo está guardado em aux

    // se a fila ficou vazia, ajustamos o fim para apontar para NULL, 
    // caso só havia um nó, ambos apontarão para NULL
    if(*inicio == NULL){
        *fim = NULL;
    }

    free(aux); // liberamos a memória, apagando o nó que aux apontava
}

void listar(struct No *inicio){
    // criamos um ponteiro auxiliar, ele que vai percorrer a lista
    struct No *aux = inicio;

    printf("Fila: ");

    // enquanto o auxiliar não apontar para NULL, ele percorrerá a lista
    while(aux != NULL){
        printf("%d -> ", aux -> valor);
        aux = aux -> prox; // caminhando nó por nó para printar o valor dele
    }

    printf("NULL\n");
}

int main(){
    // Quando a Lista está vazia ambos ponteiros apontam para NULL
    struct No *inicio = NULL; // apontará para quem sai
    struct No *fim = NULL; // apontará para quem entra

    enqueue(&inicio, &fim, 5);
    enqueue(&inicio, &fim, 10);
    enqueue(&inicio, &fim, 15);
    listar(inicio);
    dequeue(&inicio, &fim);
    listar(inicio);
    enqueue(&inicio, &fim, 20);
    listar(inicio);
    dequeue(&inicio, &fim);

    listar(inicio);
}

// Exercicios (slide 22):
/*
O que cada instrução faz:
• 1) (*fim)->prox = novo;
    R: Faz com que o último nó aponte para o novo nó, chamado de "novo", ou seja, 
        conecta um novo nó ao final da estrutura da fila simplesmente encadeada.
• 2) *fim = novo;
    R: Está fazendo com que o ponteiro Fim aponte para o Novo (nó novo).
• 3) *inicio = (*inicio)->prox;
    R: Ponteiro inicio passa a apontar para o próximo que estava no nó que o ponteiro 
        Inicio apontava, ou seja, a fila começa no nó seguinte que o ponteiro inicio ANTES apontava.
• 4) if (*inicio == NULL) *fim = NULL;
    R: Se o ponteiro inicio estiver apontando para NULL (está vazio), 
        fim passa a apontar para NULL também, ou seja, fila está vazia.
• 5) aux = aux->prox;
    R: ponteiro Auxiliar (aux) passa a apontar para o próximo que estava armazenado no No que ele 
        antes apontava.
*/
// Exercicio (slide 23) -> código inserido acima:
/*
• Qual valor está no início?
    R: Antes do primeiro Dequeue, o valor 5 está no inicio, depois dele passa a ser o 10; no fim
        o valor de inicio é 15.
• Qual valor está no fim?
    R: O valor 20 está no fim.
• Quantos nós sobraram?
    R: No final de toda a execução, existem apenas 2 nós.
• Qual foi a ordem de saída?
    R: 15 -> 20 -> NULL.
• Saída completa do meu algoritmo (com os listar):
    Fila: 5 -> 10 -> 15 -> NULL
    Fila: 10 -> 15 -> NULL
    Fila: 10 -> 15 -> 20 -> NULL
    Fila: 15 -> 20 -> NULL
*/