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
    switch (letra)
    {
    case '+':
        printf("La suma queda como: %d\n",a+b);
        break;
    case '-':
        printf("La resta queda como: %d\n",a-b);
        break;
    case '*':
        printf("La multiplicacion queda como: %d\n",a*b);
        break;
    case '/':
        switch (b)
        {
        case 0:
            printf("La division no se puede hacer\n");
            break;
        default:
            printf("La division quedo como: %d\n",a/b);
            break;
        }
        break;
    }
}