#include <stdio.h>
#include <stdlib.h>

int main (){
    int x = 10, y = 50;
    int *p1, *p2;

    p1 = &x; // pega o endereço de x
    p2 = &y; // pega o endereço de y
    *p1 = *p2; // iguala os valores, fazendo com que p1 (x que é 10) se torne valor em p2 (que é 50)

    printf("%d\n", p1); // ainda armazena o local de x
    printf("%d\n", p2); // ainda armazena o local de y
    printf("%d\n", *p1); //os valores de todos estao 50 agora
    printf("%d\n", *p2);
    printf("%d\n", x);
    printf("%d\n\n", y);

    x = 10; // quando atualizamos o numero em x, atualizamos tambem, automaticamente, o numero em p1
    printf("%d\n", x);
    printf("%d\n", p1); 
    printf("%d\n", *p1); // pois ele ainda esta apontando para o mesmo local do inicio, 
                         // independente do valor que foi inserido nele depois (quem manda é o x)

    // Perguntas:
    // depois da linha *p1 = *p2; qual o valor final de x? 
        // R: O valor final de x é 50.
    // depois dessa linha, p2 aponta para quem? (x ou y?)
        // R: p2 continua apontando para y
    // depois dessa linha, p1 aponta para quem? (x ou y?)
        // R: p1 ainda aponta para x, apesar de o valor de p2 em si mudar tanto o x quanto o p1
}