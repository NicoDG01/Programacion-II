#include <stdio.h>
#include <math.h>

/* ====== DECLARÁ E IMPLEMENTÁ ACÁ LAS FUNCIONES QUE FALTAN ====== */

void calcularParametrosAntena(double v, double *cR, double *rl)
{   
    *cR = (v-1)/(v+1);
    *rl = -20 * log10(fabs(*cR));
}

int main()
{
    double vswr = 1.5;
    double coefReflexion, returnLoss;
    calcularParametrosAntena(vswr, &coefReflexion, &returnLoss);
    printf("VSWR: %.2f\n", vswr);
    printf("Coeficiente de reflexion: %.4f\n", coefReflexion);
    printf("Return Loss: %.2f dB\n", returnLoss);
    return 0;
}