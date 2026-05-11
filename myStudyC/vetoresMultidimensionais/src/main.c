// Vetores multidimensionais são vetores que possuem mais de um valor ao serem criados
// Ex: int numeros[2][3] = 3 valores no indice 0 e 3 valores no indice 1
// 1° [] guarda as linhas
// 2° [] guarda as colunas
//    0  1  2
// 0 [3, 2, 1]
// 1 [1, 2, 3]
// A descrita acima e no algoritmo está armazenando apenas 2 dimensões, mas vetores multidimensionais podem
// ter quantas dimensões quisermos.

#include <stdio.h>

int main(){
    int numeros[2][3];

    for(int linha = 0; linha < 2; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("Digite um numero pra armazenar [%d, %d]: ", linha, coluna);
            scanf("%d", &numeros[linha][coluna]);
        }
    }

    for(int linha = 0; linha < 2; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("%d ", numeros[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}
