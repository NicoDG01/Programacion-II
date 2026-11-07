// Tengo que hacer la serie de fibonacci
#include <stdio.h>

int a, b, aux, i;
int numea;

int main()
{
    printf("Ingresame 1 numeros: ");

    scanf("%d", &numea);

    if (numea == 0)
        printf("No existe serie de Fibonacci");
    else if (numea == 1)
        printf("La serie de Fibonacci para 1 es 1\n");
    else
    {
        a = 1;
        b = 1;
        printf("%d %d ", a, b);

        for (i = 2; i < numea; i++)
            {
                aux = a + b;
                a = b;
                b = aux;
                printf("%d ", b);
            }
    }
}