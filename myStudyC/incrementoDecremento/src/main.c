#include <stdio.h>

int main(int argc, char const *argv[]){
    //Decremento e Incremento
    //Incremento
    //pre incremento
    //++variavel;
    //pos incremento
    //variavel++;
    //Decremento
    //pre decremento
    //--variavel;
    //pos decremento
    //variavel--;

    int numA = 1, numB = 1;
    printf("Incremento\nPre Incremento\n");
    printf("%d", ++numA); //ele incrementa primeiro e depois mostra (numA é agora 2)
    printf("\nPós Incremento\n");
    printf("%d\n", numB++); //ele mostra primeiro o anterior, depois incrementa (numB é 1 ainda quando mostra aqui)
    printf("%d", numB); //aqui ele mostra o atualizado (numB agora se mostra 2)

    printf("\n\nDecremento\nPre Decremento\n");
    printf("%d", --numA);
    printf("\nPós Decremento\n"); //mesma lógica do incremento
    printf("%d\n", numB--);
    printf("%d", numB);

    return 0;
}
