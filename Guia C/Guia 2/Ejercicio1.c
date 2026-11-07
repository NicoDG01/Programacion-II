#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

char letra[50];
int i;
int main(){
    printf("Ingrese un caracter: "); gets(letra);
    for (i = 0; i < strlen(letra); i++){
        printf("El caracter ingresado fue: %c\n",letra[i]);
        printf("El codigo ASCII es: %d\n",letra[i]);
    }
}