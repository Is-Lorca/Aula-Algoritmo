#include <stdio.h>
#include <stdlib.h>

int main (){
    int x = 5, y = 10;
    int *p1;

    p1 = &x; // p1 pega o endereço de x, guardando dentro dele

    *p1 = 20; // alteramos o numero dentro de p1 
              // (nao a memoria, que seria se nós não colocassemos *, mudamos o valor em si 
              // (antes 5, agora 20))
              

    printf("%d\n", *p1);
    printf("%d", x); // isso altera o valor em x tambem

    // perguntas:
    // qual o valor final de x? R: 20
    // p1 aponta para quem? (x ou y?) R: Ele aponta para x

}