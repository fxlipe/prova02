#include <stdio.h>
#include <stdlib.h>

void main() {
    char str[10];
    printf("Digite uma palavra de até 10 digitos : ");
    scanf("%[^\n]%*c", &str);
    printf("A string possui %d letras\n", strlen(str));
}
