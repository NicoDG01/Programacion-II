#include <stdio.h>

/* ====== DECLARÁ E IMPLEMENTÁ ACÁ LAS FUNCIONES QUE FALTAN ====== */

void calcularEstadisticas(double mu[], int c, double *pr, double *pe, double *me )
{
    double cant = 0;
    *me = mu[0];
    *pe = mu[0];
    int i;
    for ( i = 0; i < c; i++)
    {
        cant += mu[i];
        if (mu[i] > *me)
            *me = mu[i];
        if (mu[i] < *pe)
            *pe = mu[i];
    }
    *pr = cant / c;
}

int main()
{
double muestras[] = {-65.0, -70.2, -68.5, -80.1, -72.3};
int cantidad = 5;
double promedio, peor, mejor;
calcularEstadisticas(muestras, cantidad, &promedio, &peor, &mejor);

printf("Promedio: %.2f dBm\n", promedio);
printf("Peor caso: %.2f dBm\n", peor);
printf("Mejor caso: %.2f dBm\n", mejor);
return 0;
}