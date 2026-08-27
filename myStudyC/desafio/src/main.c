#include <stdio.h>

int main(){
    FILE *entrada;
    FILE *saida;

    char palavra[50];

    entrada = fopen("palavras.in", "r");

    if(entrada == NULL){
        printf("Erro ao ler arquivo");
        return 1;
    }

    // EOF =  End of File (enquanto não for o End of File, continue lendo)
    while(fscanf(entrada, "%s", palavra) != EOF){
        
        printf("Palavra: %s\n", palavra);
    }

    fclose(entrada);

    return 0;
}
