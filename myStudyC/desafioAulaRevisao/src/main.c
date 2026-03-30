#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int dobro(int numero){
    int dobro = numero*2;

    return dobro;
}
float metade(int numero){
    float metade = numero/2.0;

    return metade;
}

int main(){
    // Declaração de variáveis:
    bool negativo;
    int numero, dobrado;
    float dividido;
    char oqueE[7];

    do{
        printf("Insira um número inteiro positivo: ");
        scanf("%d", &numero);
        // Quebra o loop, pois só será acessado depois que for checado que o numero é maior que 0
        negativo = false;

        // Checa se o número é positivo ou negativo
        if(numero<0){
            printf("\nO número não pode ser negativo, tente novamente.\n\n");
            negativo = true;
        }
    // Enquanto a var negativo for true, repita
    }while(negativo == true);

    // Chama funções
    dobrado = dobro(numero);
    dividido = metade(numero);
    
    // Checa se o número é par ou impar e armazena na var de string oqueE
    if(numero%2 == 0){
        strcpy(oqueE, "par");
    }
    else{
        strcpy(oqueE, "impar");
    }

    // Printa na tela as infos
    printf("O dobro de %d é %d\n", numero, dobrado);
    printf("A metade de %d é %.1f\n", numero, dividido);
    printf("O número %d é %s", numero, oqueE);

    return 0;
}
