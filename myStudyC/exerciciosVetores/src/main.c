#include <stdio.h>

int ex1(){
    //1. Declare um vetor de 5 números inteiros e atribua valores manualmente. Exiba todos os valores na tela.
    int vetor[5] = {1, 5, 10, 20, 50};

    int tamanhoVetor = sizeof(vetor)/sizeof(vetor[0]);

    for(int i = 0; i<tamanhoVetor; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}

int ex2(){
    //2. Crie um vetor de 10 inteiros. Preencha com valores digitados pelo usuário e exiba em seguida.
    int vetor[10];
        
    int tamanhoVetor = sizeof(vetor)/sizeof(vetor[0]);

    for(int i = 0; i < tamanhoVetor; i++){
        printf("Insira um número no vetor: ");
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i<tamanhoVetor; i++){
        printf("%d\n", vetor[i]);
    }
    
    return 0;
}

int ex3(){
    //3. Leia 5 números e armazene em um vetor. Exiba os números na ordem inversa.
    int vetor[5];

    int tamanhoVetor = sizeof(vetor)/sizeof(vetor[0]);
    
    for(int i = 0; i < tamanhoVetor; i++){
        printf("Insira o valor no vetor: ");
        scanf("%d", &vetor[i]);
    }
    for(int i = tamanhoVetor - 1; i > -1; i--){
        printf("%d\n", vetor[i]);
    }

    return 0;
}

int ex4(){
    //4. Leia 8 números e mostre apenas os números pares.
    int vetor[8];
    int tamanhoVetor = sizeof(vetor)/sizeof(vetor[0]);

    for(int i = 0; i<tamanhoVetor; i++){
        printf("Insira um valor: ");
        scanf("%d", &vetor[i]);
    }
    printf("\nSão pares:\n");
    for(int i = 0; i<tamanhoVetor; i++){
        if (vetor[i] % 2 == 0){
            printf("Valor no índice %d: %d\n", i, vetor[i]);
        }
    }

}

int ex5(){
    //5. Leia 6 números e conte quantos são maiores que 10.
    int vetor[6];
    int tamanhoVetor = sizeof(vetor)/sizeof(vetor[0]);

    for(int i = 0; i<tamanhoVetor; i++){
        printf("Insira o valor: ");
        scanf("%d", &vetor[i]);
    }
    printf("\nSão os valores maiores que 10:\n");
    for(int i = 0; i<tamanhoVetor; i++){
        if(vetor[i] > 10){
            printf("O valor no índice %d: %d\n", i, vetor[i]);
        }
    }
}

int main(){
    int escolha;
    printf("Exercicios:\n 1 - Exercicio 1\n 2 - Exercicio 2\n 3 - Exercicio 3\n 4 - Exercicio 4\n 5 - Exercicio 5\n");
    scanf("%d", &escolha);

    switch (escolha){
    case 1:
        printf("\n");
        ex1();
        break;
    case 2:
        printf("\n");
        ex2();
        break;
    case 3:
        printf("\n");
        ex3();
        break;
    case 4:
        printf("\n");
        ex4();
        break;
    case 5:
        printf("\n");
        ex5();
        break;
    default:
        printf("\n");
        printf("Valor invalido");
        break;
    }

    return 0;
}
