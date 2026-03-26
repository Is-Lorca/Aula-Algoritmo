#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int cont = 1;
    // Loops
    // For -- While -- Do/While
    // while -- enquanto for verdadeiro o que estiver dentro do (), ele repetirá o código dentro dele
    printf("--- While ---\n"); //testa antes de executar
    while(cont <= 5){ // enquanto contagem não atingir o numero 5, continue a contar
        printf("%d\n", cont);
        cont++; // adicionando +1 ao cont a cada loop
    }

    printf("--- Do / While ---\n");
    cont = 1;
    do{// executa antes de testar a condição
        printf("%d\n", cont);
        cont++;
    }while(cont <= 5);

    printf("--- For ---\n");
    //a variável inserida no FOR não estará disponível fora dele!
    for(int cont2= 1; cont2 <=5; cont2++){ // variavel -> inicialização; ate que ponto repetir; o que fazer com essa variavel -> todos opcionais
        // dentro do for inserimos o valor da variavel, a condição e o comportamento que esperamos 
        // da variavel (no caso, soma 1)
        printf("%d\n", cont2);
    }

    return 0;
}
