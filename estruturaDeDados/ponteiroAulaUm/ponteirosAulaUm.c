#include <stdio.h>

	//O conceito de alocação dinâmica refere-se ao ato de colocar memória durante a execução do programa.
	//Esse tipo de operação é realizada através de ponteiros.
	
	//Um ponteiro é uma variável como outra qualquer, porém, ao invés de armazenar valores, ele armazena endereõs físicos na memória.
	//A forma geral de declarar um ponteiro, em C, é a seguinte:
	//		<Tipo de dado> * <Nome da Variável>;
	
	//Existem dois tipos de operadores para operar os ponteiros: * e &
	// & = Retorna o endereço de memória do seu operando.
	// * = Retorna o conteúdo do variável localizada no endereço (ponteiro) do operando.
	// Exemplo: Em um tabuleiro de xadrez, temos o número 5 na posição C2
	// & = C2
	// * = 5

int main() {
	
	int x=10, y=20; 	//Declara duas variáveis do tipo inteiro
	int *p1, *p2;		//Declara duas variáveis do tipo ponteiro para inteiro
	
	p1 = &x;			//Armazena em p1 o endereço de x
	p2 = &y;			//Armazena em p2 o endereço de y
	
	printf("O conteudo de p1: %d, na posicao %d.", *p1, &x); 	//O valor exibido deve ser o valor de x
	printf("\nO conteudo de p2: %d, na posicao %d.", *p2, &y); 	//O valor exibido deve ser o valor de y
	
	*p1 = *p2;			//Igualando os valores de ambos
	printf("\nO valor de x = %d", x);
	printf("\nO valor de y = %d", y);
	p2 = p1;
	
	*p2 = 30;
	
	printf("\nO valor de X = %d e o conteudo de p1 = %d.", x, *p1);
	printf("\nO valor de Y = %d e o conteudo de p2 = %d.", y, *p2);
	
	
	printf("\n------------------------------------");
	
	int w = 30;
	int z = 50;
	int *p3;
	int *p4;
	
	p4=&z;
	p3=&w;
	
	*p3=10;
	
	p4=p3;
	
	*p4=20;
	
	p3=&z;
	
		printf("\nO valor de W = %d e o conteudo de p3 = %d.", w, *p3);
		printf("\nO valor de Z = %d e o conteudo de p4 = %d.", z, *p4);
		
	int a = 5;
	int b = 8; 
	int c = 12;
	int d = 20;
	int *p11, *p22, *p33;
	
	p11=&a;
	p22=&b;
	p33=&c;
	
	*p11=*p22;
	p22=&d;
	*p22=*p33+3;
	p33=p11;
	*p33=*p22-5;
	p11=&c;
	*p11=*p22+*p33;
	p22=&a;
	*p22=*p11-10;
	
	printf("\nA= %d", a);
	printf("\nB= %d", b);
	printf("\nC= %d", c);
	printf("\nD= %d", d);
		printf("\nP11= %d", *p11);
		printf("\nP22= %d", *p22);
		printf("\nP33= %d", *p33);

	
	return 0;
}