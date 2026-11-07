#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Elige un numero entero: "); scanf("%d",&a);
    if (a %2 == 0)
    {
        printf("El numero es par\n");
    }
    else
        printf("El numero es impar\n");
}
