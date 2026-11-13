#include <stdio.h>
#include <math.h>

/* ====== DECLARÁ E IMPLEMENTÁ ACÁ LAS FUNCIONES QUE FALTAN ====== */

double calcularEIRP(double Ptx, double Gtx)
{
    return Ptx + Gtx;
}
double calcularFSPL(double km, double fMHz)
{
    return 32.44 + 20 * log10(km) + 20 * log10(fMHz);
}
double calcularPotenciaRx(double e, double Grx, double P)
{
    return e + Grx - P;
}
double calcularMargen(double Prx, double s)
{
    return Prx - s;
}

int main()
{
    double eirp = calcularEIRP(43.0, 15.0);
    double perdida = calcularFSPL(5.0, 2400.0);
    double potenciaRx = calcularPotenciaRx(eirp, 12.0, perdida);
    double margen = calcularMargen(potenciaRx, -95.0);
    printf("EIRP: %.2f dBm\n", eirp);
    printf("Perdida FSPL: %.2f dB\n", perdida);
    printf("Potencia Rx: %.2f dBm\n", potenciaRx);
    printf("Margen de enlace: %.2f dB\n", margen);

    return 0;
}