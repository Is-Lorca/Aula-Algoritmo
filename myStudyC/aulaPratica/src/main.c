#include <stdio.h>

//Funções:
int primeiraFuncao(){
    printf("Chamada da função\n");

    return 0;
}

int funcao_seg(){
    int numA;
    printf("Escreva o primeiro número: ");
    scanf("%d", &numA);

    int numB;
    printf("Escreva o segundo número: ");
    scanf("%d", &numB);

    if(numA > numB){
        printf("Primeiro número maior");
    }
    else if(numA < numB){
        printf("Segundo número maior");
    }
    else{
        printf("Números iguais");
    }

    return 0;
}

int func_switch(){
    int dia;
    printf("Digite um numero [1 à 3]: ");
    scanf("%d", &dia);

    switch(dia){
        case 1:
            printf("Segunda-Feira\n");
            break;
        case 2:
            printf("Terça-Feira\n");
            break;
        case 3:
            printf("Quarta-Feira\n");
            break;
    }

    return 0;
}

int main(){
    
    func_switch();
    primeiraFuncao();
    funcao_seg();
    
    return 0;
}