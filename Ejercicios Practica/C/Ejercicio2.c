#include <stdio.h>
#include <math.h>

/* ====== DECLARÁ E IMPLEMENTÁ ACÁ LAS FUNCIONES QUE FALTAN ====== */

double calcularFSPL(double km, double fMHz)
{
    return 32.44 + 20 * log10(km) + 20 * log10(fMHz);
}
double calcularPotenciaRecibida(double x, double y, double z, double p)
{
    return x + y + z - p;
}

int main()
{
double distanciaKm = 5.0;
double frecuenciaMHz = 2400.0;
double perdida = calcularFSPL(distanciaKm, frecuenciaMHz);
printf("Perdida por espacio libre: %.2f dB\n", perdida);
double potenciaRx = calcularPotenciaRecibida(43.0, 15.0, 12.0, perdida);
printf("Potencia recibida estimada: %.2f dBm\n", potenciaRx);
return 0;
}