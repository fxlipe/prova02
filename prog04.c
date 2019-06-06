#include <stdio.h>
#include <stdlib.h>

void main() {
    char vet[10];
    for (int l = 1; l <= 10; l++) {
        printf("Digite uma letra: ");
        scanf("%c", &vet[l]);
    }
    for (int l = 0; l <= 10; l++) {
        printf("%c", vet[l]);
    }
}