#include <stdio.h>

int main(){
    int x = 10, y = 20;
    int *p1, *p2;

    p1 = &x;
    p2 = &y;

    printf("O endereço de P1 é: %d\n", p1);
    printf("O endereço de P2 é: %d", p2);
}