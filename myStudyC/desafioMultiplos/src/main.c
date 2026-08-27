#include <stdio.h>

int main(){
    FILE *entrada;
    FILE *arquivoResult;
    FILE *arquivoResultLer;

    int quantidade, numero1, numero2, resultado;

    entrada = fopen("numeros.txt", "r");
    
    if (entrada == NULL || arquivoResult == NULL){
        printf("Erro ao abrir arquivo\n");
        return 1;
    }
    
    fscanf(entrada, "%d", &quantidade);
    
    for(int linha = 0; linha < quantidade; linha++){
        fscanf(entrada, "%d %d", &numero1, &numero2);
        // abre arquivo para escrever os multiplos
        arquivoResult = fopen("multiplos.txt", "w");
        fprintf(arquivoResult, "%d\n", numero1 * numero2);
        // fecha para depois lermos o que foi escrito
        fclose(arquivoResult);
        // abre o arquivo para leitura
        arquivoResultLer = fopen("multiplos.txt", "r");
        fscanf(arquivoResultLer, "%d", &resultado);
        // fecha depois de lido
        fclose(arquivoResultLer);
        printf("%d * %d = %d\n", numero1, numero2, resultado);
    }
    
    fclose(entrada);

    return 0;
}
