#include <iostream>
#include <cmath>

/* ====== DECLARÁ E IMPLEMENTÁ ACÁ LA CLASE EnlaceRF ====== */

class EnlaceRF
{
private:
    double frecuenciaMHz;
    double distanciaKm;
    double perdidaEstimadaDd;
public:
    EnlaceRF(double fMHz, double dKm)
    {
        frecuenciaMHz = fMHz;
        distanciaKm = dKm;
    }
    void mostrar() const
    {
        std::cout << "La frecuencia es: " << frecuenciaMHz << " MHz, la distancia es: " << distanciaKm << " km\n";
    }
    double getPerdida() const
    {
        return 32.44 + 20 * log10(distanciaKm) + 20 * log10(frecuenciaMHz);
    }
    double getFrecuencia() const
    {
        return frecuenciaMHz; 
    }
    double getDistancia() const
    {
        return frecuenciaMHz;
    }

};

int main()
{
    EnlaceRF enlace(2400, 5.0);

    enlace.mostrar();

    std::cout << "Perdida: " << enlace.getPerdida() << " dB\n";
    std::cout << "Frecuencia: " << enlace.getFrecuencia() << " MHz\n";
    std::cout << "Distancia: " << enlace.getDistancia() << " km\n";

    return 0;
}