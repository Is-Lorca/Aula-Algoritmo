// FILE é a declaração de uma estrutura, um dado especial.
// Dado dinamico, construido na biblioteca stdio.h
// Armazena referencias para arquivos, * é um ponteiro, ele esta armazenando o endereço do arquivo, uma referencia.
// 

#include <stdio.h>

int main(){
    int numeros[5];

    // Endereço onde o arquivo esta
    FILE *arquivo;

    arquivo = fopen("dados.txt", "r");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    for(int linha = 0; linha < 5; linha++){
        fscanf(arquivo, "%d", &numeros[linha]);
    }

    fclose(arquivo);

    for(int linha = 0; linha < 5; linha++){
        printf("%d\n", numeros[linha]);
    }

    return 0;
}