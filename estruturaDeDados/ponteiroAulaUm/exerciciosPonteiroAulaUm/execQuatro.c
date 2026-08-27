#include <stdio.h>
#include <stdlib.h>

int main (){
    int x = 2, y = 3, z = 4;
    int *p1, *p2;

    p1 = &x; // p1 -> x = 2
    p2 = &y; // p2 -> y = 3

    *p1 = *p2; // p1 -> y

    p1 = &z; // p1 = 4
    *p1 = 10; // p1 = 10, z = 10
    *p2 = *p1; // p2 -> p1 -> z, todos são 10 agora

    // Agora responda:
    // x = 2
    // y = 3
    // z = 10
    // p1 → z = 10
    // p2 → z = 10
}