#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char letra;
    int a, b;
    printf("Elige alguno de los siguientes caracteres: +, -, / ,*: "); scanf("%c",&letra);
    printf("Has elegio: %c\n",letra);
    printf("Elige un numero entero: "); scanf("%d",&a);
    printf("Elige otro numero entero: "); scanf("%d",&b);
    if (letra == '+')
        printf("La suma queda como: %d\n",a+b);
    else if (letra == '-')
        printf("La resta queda como: %d\n",a-b);
    else if (letra == '*')
        printf("La multiplicacion queda como: %d\n",a*b);
    else if (letra == '/' && b != 0)
        printf("La division queda como: %d\n",a/b);
    else if (letra == '/' && b == 0)
        printf("La division no puede ser\n");
}