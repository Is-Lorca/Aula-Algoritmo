#include <stdio.h>

int main(int argc, char const *argv[]){
    int inicio, fim, divisor;

    // a variável divisor pega o divisor do usuário
    printf("Gostaria de saber os múltiplos de que número?\n");
    scanf("%d", &divisor);

    // pega o inicio e o fim da cadeia de números que será checada
    printf("Insira um número de inicio e um de fim: ");
    scanf("%d %d", &inicio, &fim);

    // algoritmo de substituição de variável, caso o número de início seja maior que o do fim
    if(inicio > fim){
        int temp = inicio;
        inicio = fim;
        fim = temp;
    }

    // checagem propriamente dita
    for(int cont = inicio; cont != fim; cont++){
        if(cont % divisor == 0){
            printf("%d é múltiplo\n", cont);
        }
    }
}
