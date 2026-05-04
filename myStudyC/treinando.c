/*
#include <stdio.h>

int main(){
	int num1, num2, soma, subtracao, multiplicacao;
	float divisao;
	printf("Insira dois números para as operações: ");
	scanf("%d %d", &num1, &num2);
	soma = num1 + num2;
	subtracao = num1 - num2;
	multiplicacao = num1 * num2;
	divisao = num1 / (num2 + 0.00);
	printf("A soma de %d e %d: %d\n", num1, num2, soma);
	printf("A subtração de %d e %d: %d\n", num1, num2, subtracao);
	printf("A multiplicação de %d e %d: %d\n", num1, num2, multiplicacao);
	printf("A divisão de %d e %d: %.2f\n", num1, num2, divisao);
}
*/

/*
#include <stdio.h>

int main(){
	int num, copiaNum;
	printf("Insira o número desejado: ");
	scanf("%d", &num);
    copiaNum = num;
    copiaNum--;
    num++;
	printf("O antecessor é: %d\n", copiaNum);
	printf("O sucessor é: %d", num);
}
*/

/*
#include <stdio.h>
int main(){
	int idade;
	printf("Insira idade: ");
	scanf("%d", &idade);
	if(idade >= 18){
        printf("Maior de Idade.");
    }
    else{
        printf("Menor de Idade.");
    }
}
*/

/*
#include <stdio.h>
int main(){
    int num;
	printf("Insira um número: ");
	scanf("%d", &num);
	if (num % 2 == 0){
        printf("O número %d é Par.", num);
    }
    else{
        printf("O número %d é Ímpar.", num);
    }
}
*/

/*
#include <stdio.h>
int main(){
	for(int i = 1; i <= 100; i++){
        printf("%d\n", i);
    }
}
*/

/*
#include <stdio.h>
int main(){
	int num = 100;
	while(num >= 100){
        printf("%d\n", num);
        num--;
    }
}
*/

/*
#include <stdio.h>
int main(){
    int soma = 0, num;
    for(int i = 0; i < 10; i++){
        printf("Insira os números: ");
        scanf("%d", &num);
        soma += num;
    }
    printf("%d", soma);
}
*/

/*
#include <stdio.h>
int main(){
    int num, soma = 0;
    do{
        printf("Insira os números, digite 0 para parar: ");
        scanf("%d", &num);
        soma+= num;
    }while(num != 0);

    printf("A soma de todos os números inseridos é: %d", soma);
}
*/

/*
#include <stdio.h>
int main(){
	int num, pares = 0, impares = 0;
	for(int i = 0; i < 10;  i++){
        printf("Insira número: ");
        scanf("%d", &num);
        if(num % 2 == 0){
            pares++;
        }
        else{
            impares++;
        }
    }
    printf("Foram inseridos %d números pares e %d números ímpares", pares, impares);
}
*/

/*
#include <stdio.h>
int main(){
    float nota, soma = 0, media;
    for(int i = 0; i < 5; i++){
        printf("Insira a nota: ");
        scanf("%f", &nota);
        soma += nota;
    }
    media = soma / 5.0;

    printf("A média de nota foi: %.1f\n", media);
    if(media >= 7){
        printf("Aluno APROVADO.");
    }
    else if (5 < media < 6.9){
        printf("Aluno de RECUPERAÇÃO.");
    }
    else{
        printf("Aluno REPROVADO.");
    }
}
*/

/*
#include <stdio.h>
int main(){
    int num;
    printf("Insira um número para ver sua tabuada: ");
    scanf("%d", &num);
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, (num*i));
    }
}
*/

/*
#include <stdio.h>
int main(){
    int num, maior = 0;
    for(int i = 0; i < 10; i++){
        printf("Insira o número: ");
        scanf("%d", &num);
        if(i == 0){
            maior = num;
        }
        else if(maior < num){
            maior = num;
        }
    }
    printf("O maior número digitado foi: %d", maior);
}
*/

/*
#include <stdio.h>
int main(){
    int num, contador = 0, soma = 0;
    float media;
    while(num != -1){
        printf("Insira um número: ");
        scanf("%d", &num);
        if (num != -1){
            contador ++;
            soma += num;
        }
    }
    media = soma/(contador+0.0);
    printf("Foram digitados %d números.\nA média dos números digitados é: %.1f", contador, media);
}
*/

/*
#include <stdio.h>
int main(){
    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 5 ==0){
            printf("%d é Múltiplo de 3 e de 5\n", i);
        }
    }
}
*/

/*
#include <stdio.h>
int main(){
	int num, fatorial = 1;
	printf("Insira um número: ");
	scanf("%d", &num);
	for(int i = num; i >= 1; i--){
        fatorial *= i;
    }
    printf("O fatorial do número digitado é: %d", fatorial);
}
*/

/*
#include <stdio.h>
int main(){
    int maior = 0, menor = 0, soma = 0, num;
    float media;
    for(int i = 0; i < 10; i++){
        printf("Insira o número: ");
        scanf("%d", &num);

        soma += num;

        if(i == 0){
            maior = num;
            menor = num;
        }
        else if (maior < num){
            maior = num;
        }
        else if (menor > num){
            menor = num;
        }
    }
    media = soma /10.0;

    printf("O maior número da sequência foi: %d\n", maior);
    printf("O menor número da sequência foi: %d\n", menor);
    printf("A media dos números da sequência é: %.1f\n", media);
}
*/

/*
#include <stdio.h>
int main(){
    int num, pares = 0, impares = 0, negativos = 0, positivos = 0;
    while(num!= 0){
        printf("Insira um número: ");
        scanf("%d", &num);
        if(num!= 0){
            if(num < 0){
                negativos++;
            }
            else{
                positivos++;
            }
            if(num%2 ==0){
                pares++;
            }
            else{
                impares++;
            }
        }
    }
    printf("Na sequência enviada, haviam %d numeros negativos, %d numeros positivos, %d numeros pares e %d numeros impares",
         negativos, positivos, pares, impares);
}
*/

#include <stdio.h>
int main(){
    int num = 0, num1, num2 = 0;
    for(num1=0; num1<=3; num1++){
        printf("%d\n", num1);
    }
    printf("\n");
    
    do{
        printf("%d\n", num2);
        num2++;
    }while(num2<=3);
    printf("\n");
    
    while(num<=3){
        printf("%d\n", num);
        num++;
    }
}