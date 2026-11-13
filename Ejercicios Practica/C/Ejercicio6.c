#include <stdio.h>

/* ====== DECLARÁ E IMPLEMENTÁ ACÁ LAS FUNCIONES QUE FALTAN ====== */

int clasificarRSSI(double r)
{
    if (r > -60)
        return 4;
    else if (-75 < r && r <= -60)
        return 3;
    else if (-90 < r && r <= -70)
         return 2;
    else if (r <= -90)
        return 1;
    else 
        return 5;
}
const char *descripcionCalidad(int c)
{
    switch (c)
    {
    case 1:
        return "Sin Señal Util\n";
        break;
    case 2:
        return "Debil\n";
        break;
    case 3:
        return "Buena\n";
        break;
    case 4:
        return "Excelente\n";
        break;
    case 5:
        return "Desconocida\n";
        break;
    }
}

int main()
{
    double rssi = -68.5;

    int calidad = clasificarRSSI(rssi);
    printf("RSSI: %.1f dBm -> Calidad: %d\n", rssi, calidad);
    const char *descripcion = descripcionCalidad(calidad);
    printf("Descripcion: %s\n", descripcion);
    return 0;
}