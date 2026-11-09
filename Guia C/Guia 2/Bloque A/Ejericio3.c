#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

char letra[50];
char nueva[50];
int i;

int main(){
    printf("Ingrese una frase en minusculas: "); gets(letra);
    for ( i = 0; i < strlen(letra); i++)
    {
        nueva[i]= letra[i]-32;
    }
    nueva[i] = '\0';
    printf("Asi quedo en mayusculas: %s\n",nueva);
}