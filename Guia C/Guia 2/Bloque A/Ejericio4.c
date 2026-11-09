#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

char cade1[50];
char cade2[50];

int main(){
    printf("Ingresee una cadena de texto: ");gets(cade1);
    printf("Ingresee otra cadena de texto: ");gets(cade2);
    int longi1 = strlen(cade1);
    int longi2 = strlen(cade2);
    printf("La longitud de la cadena 1 es: %d, y la longitud de la cadena 2 es: %d \n",longi1, longi2);
    int compara = strcmp(cade1, cade2);
    if (compara == 0)
        printf("Ambas cadenas son iguales \n");
    else if (compara > 0)
        printf("La primer cadena es mayor que la segunda\n");
    else
        printf("La segunda cadena es mayor que la primera\n");
    strcat(cade1, cade2);
    printf("Asi queda la cadena 2 concatenada en la 1: %s \n",cade1);
    strcpy(cade2, cade1);
    printf("Asi quedo la segunda cadena: %s \n", cade2);    
}