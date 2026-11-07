#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Elige un numero entero: "); scanf("%d",&a);
    printf("Elige otro entero: "); scanf("%d",&b);
    if (a > b)
    {
        printf("El mayor es %d\n",a);
    }
    else
        printf("El mayor es %d\n",b);
}
