#include <iostream>
#include <string>


double Megabits;
double MB;

double mbpsAKBps(double mbps)
{
    double KBps;
    KBps = (mbps/8)*1000;
    return KBps;
}


double tiempoDescargaSeg(double tamanioMB, double velocidadMbps)
{
    double velocidad;
    velocidad = tamanioMB/velocidadMbps;
    return velocidad;
}

int main()
{
    std::cout << "Ingrese la velocidad del internet en Mbps: "; std::cin >> Megabits;
    std::cout << "La velocidad en KBps quedo: " << mbpsAKBps(Megabits) << " KBps\n";
    std::cout << "Ingrese el tamaño del archivo en MB: "; std::cin >> MB;
    std::cout << "La descarga va a tardar: " << tiempoDescargaSeg(MB, Megabits) << " segundos\n";
}