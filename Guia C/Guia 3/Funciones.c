//Aca se hace la definicion de la funcion
#include <stdio.h>
//stdint.h es para usar la funcion int64_t
#include <stdint.h>
#include "Funciones.h"
void IntercambiarValores (int a, int b){
    printf("Este es el intercambio por valores\n");
    int aux;
    aux = a;
    a = b;
    b = aux;
    printf("Valores modificados correctamente\n");
    printf("Ahora el primero es: %d y el segundo es: %d\n",a,b);
}
void IntercambiarPunteros (int *a, int *b){
    printf("Este es el intercambio por punteros\n");
    int aux = *a;
    *a = *b;
    *b = aux;
    printf("Intercambio correcto\n");
    printf("El primero quedo como: %d y el segundo quedo como: %d\n",*a,*b);
}
void Maximovalor(int a, int b, int c) {
    if (a >= b && a >= c) {
        printf("El mayor es: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("El mayor es: %d\n", b);
    } else {
        printf("El mayor es: %d\n", c);
    }
}
//int64_t Es para almacenar mas numeros en la memoria
int64_t factorial(int a)
{
    int64_t ayu = 1;
    int64_t i;
    for (i = 1; i <= a; i++)
    {
        ayu = ayu * i;
        printf("%d\n",ayu);
    }
    return ayu;
}