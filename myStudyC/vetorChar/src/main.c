#include <stdio.h>
#include <stdlib.h>

// Para criar Strings em C, se não utilizamos uma biblioteca externa, 
// devemos criar uma cadeia de caracteres (dessa forma, qualquer espaço 
// é interpretado como final da cadeia)
int primeiroExemplo(){
    // Criamos uma cadeia de char
    char nome[50];

    printf("Digite seu nome: ");
    // ele não precisa do & para armazenar, vetores ja armazenam naturalmente, 
    // a não ser que queremos um caractere num espaço especifico
    scanf("%s", nome);

    printf("Ola, %s\n", nome);

    return 0;
}

// Uma forma de, mesmo com espaços ele ler tudo o que digitarmos, 
// utilizamos a função fgets(nomeVariavel, tamanho, stdin -> Standard Input (entrada padrão - ex. console))
// Tal função se encontra na biblioteca STDIO -> Biblioteca de entrada e saida de dados
int segundoExemplo(){
    char nome[50];

    printf("Digite seu nome: ");

    // A função
    fgets(nome, 50, stdin);

    printf("Nome digitado: %s", nome);

    return 0;
}

int terceiroExemplo(){
    char uf[2];

    printf("Digite a UF: ");
    scanf("%2s", uf);

    printf(uf);

    return 0;
}

int main(){
    terceiroExemplo();

    return 0;
}
