  #include <stdio.h>
#include <stdlib.h>
void main(){
    char str[10];
    int contador;
    printf("Digite uma string de até 10 digitos : ");
    scanf("%c",&str);
    contador=string_count(str);
    printf("A string possui %d letras\n",contador);
}