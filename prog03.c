#include <stdio.h>

void troca(int* p1, int* p2){
    int x;
    x = *p1;
    *p1 = *p2;
    *p2 = x;
}

void main()
{
    int n1 = 10;
    int n2 = 20;
    printf("Antes da troca:\n");
    printf("1º Número = %d\n", n1);
    printf("2º Número = %d\n", n2);
    troca(&n1, &n2);
    printf("Depois da troca:\n");
    printf("1º Número = %d\n", n1);
    printf("2º Número = %d\n", n2);
}
