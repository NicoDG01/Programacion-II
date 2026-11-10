#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include "Funciones.h"
//  Sacar el factorial de un numero
int main()
{
    int c;
    int64_t x;
    printf("Ingrese el numero que quiere hacer factorial: \n");
    scanf("%d", &c);
    if (c > 0)
    {
        x = factorial(c);
        printf("El valor de tu factorial es: %" PRId64 "\n", x);
    }
    else
    {
        printf("El numero es 0 o menor a 0, ingrese un valor positivo\n");
    }
}
