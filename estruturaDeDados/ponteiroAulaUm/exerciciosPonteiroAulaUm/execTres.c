#include <stdio.h>
#include <stdlib.h>

int main (){
    int x = 5, y = 8;
    int *p1, *p2;

    p1 = &x; // p1 começa apontando para o local de x
    p2 = &y; // p2 começa apontando para o local de y

    printf("%d\n", p1);
    printf("%d\n", *p1); // p1 ainda vale 5, igual x
    printf("%d\n\n", p2);

    *p1 = 20; // alteramos o valor inserido em p1 (por consequencia o valor em x)
    
    printf("%d\n", p1);
    printf("%d\n", *p1); // p1 agora vale 20, igual x
    printf("%d\n", x);  // x tambem vale 20
    printf("%d\n\n", p2);

    p1 = p2; // agora aqui estamos colocando dois ponteiros no mesmo lugar, no caso, apontando para y
    printf("%d\n", p1);
    printf("%d\n", p2);
    printf("%d\n", y); // agora y e os dois ponteiros tem o mesmo valor
    printf("%d\n", *p1);
    printf("%d\n\n", *p2);


    *p1 = 50; // ao fazermos isso, mudamos o valor y, p1 e p2, mas não mais o x
    printf("%d\n", p1);
    printf("%d\n", p2);
    printf("%d\n", y); 
    printf("%d\n", x); // x se mantem 20 como fizemos la em cima
    printf("%d\n", *p1);
    printf("%d\n\n", *p2);
        
    // responda assim:
    // x = 20
    // y = 50
    // p1 → y
    // p2 → y
}