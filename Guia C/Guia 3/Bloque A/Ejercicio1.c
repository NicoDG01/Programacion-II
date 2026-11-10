#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//Para incluir mi biblioteca es con ""
#include  "Funciones.h"

//Intercambiar Valores
 int main(){
    int num1, num2;
    printf("Ingrese un valor numerico: "); scanf("%d",&num1);
    printf("Ingrese otro valor numerico: "); scanf("%d",&num2);
    printf("El orden de los valores es: El primero: %d, y el segundo: %d\n",num1,num2);
    IntercambiarValores(num1, num2);
    IntercambiarPunteros(&num1, &num2);
 }