#include <stdio.h>
//arrays são vetores estáticos -> homogêneos, todos do mesmo tipo

int main(){
    //criando arrays (listas) em C:
    int numeros[5];
    //ja inserindo valores
    int valores[3] = {2, 5, 3};
    //nao colocando tamanho, a propria linguagem dirá com base em quantos elementos foram colocados
    int notas[] = {5, 10, 9, 7};
    int num;

    num = 10;

    //colocando valores na array
    numeros[0] = num;
    numeros[2] = 50;
    //valores depois de espaços declarados em vetores assumem valor 0
    //atualizando valor dentro da array
    valores[2] = 7;

    printf("%d\n", numeros[0]);
    printf("%d\n", numeros[4]);
    //nao foi colocado valor, retornará o local na memoria em que esta armazenado
    printf("%d\n", numeros[1]);
    //mostrando itens dentro da array
    for(int i = 0; i<3; i++){
        printf("%d\n", valores[i]);
    }

    //Como descobrir o tamanho dos elementos em C:
    //sizeof(variavel) -> retora valor em bytes
    //calculamos: o tamanho do vetor em bytes e dividimos pelo tamanho de um de seus elementos
    //ex: sizeof(notas) = 50 / sizeof(notas[0])= 10
    //por tanto, o tamanho da array é 5
    int tamanhoArray = sizeof(notas)/ sizeof(notas[0]);

    for(int i = 0; i<tamanhoArray;i++){
        printf("%d\n", notas[i]);
    }

    return 0;
}