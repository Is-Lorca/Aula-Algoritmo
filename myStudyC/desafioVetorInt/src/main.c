#include <stdio.h>

int main(){
    int vetor[5];
    int tamanhoVetor = sizeof(vetor)/sizeof(vetor[0]);
    char frase[55];
    
    FILE *num;

    num = fopen("num.in", "w");

    for(int pos = 0; pos < tamanhoVetor; pos++){
        scanf("%d", &vetor[pos]);
    }
    for(int pos = 0; pos < tamanhoVetor; pos++){
        fprintf("Indice %d: %d\n", pos, vetor[pos]);
    }

    fclose(num);

    num = fopen("num.in", "r");
    for(int numero = 0; numero<tamanhoVetor; numero++){
        fscanf("num.in", "%s", &frase);
        printf("%s\n", frase);
    }

    return 0;
}
