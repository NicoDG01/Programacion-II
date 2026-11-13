#include <stdio.h>
#include <math.h>

/* ====== DECLARÁ E IMPLEMENTÁ ACÁ LAS FUNCIONES QUE FALTAN ====== */

double dbmAWatts(double Pdbm)
{
    return pow(10,Pdbm/10)/1000;
}
double wattsADbm(double w)
{
    return 10*log10(w*1000);
}

int main()
{
    double potenciaDbm = -30.0;
    double potenciaWatts = dbmAWatts(potenciaDbm);
    printf("%.2f dBm = %.6f W\n", potenciaDbm, potenciaWatts);
    double watts = 0.001;
    double dbm = wattsADbm(watts);
    printf("%.4f W = %.2f dBm\n", watts, dbm);

    return 0;
}