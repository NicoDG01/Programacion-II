#include <iostream>
#include <string>

/* ====== DECLARÁ E IMPLEMENTÁ ACÁ LA CLASE Transmisor ====== */

class Transmisor
{
private:
    std::string nombre;
    double potencia;
    bool activo;
public:
    Transmisor(std::string n, double p)
    {
        nombre = n;
        if (0 < p && p < 46)
            potencia = p;
        else
            potencia = 0;
    }
    void mostrarEstado() const
    {
        if (activo == true)
            std::cout << "Esta encendido\n";
        else
            std::cout << "Esta apagado\n";
    }
    double setPotencia(double pe)
    {
        if (0 < pe && pe < 46)
            return potencia = pe;
        else
            std::cout << "Potencia fuera del rango\n";
            return potencia;
    }
    void apagar()
    {
        activo = false;
    }
    void encender()
    {
        activo = true;
    }
    std::string getNombre() const
    {
        return nombre;
    }
    double getPotencia() const
    {
        return potencia;
    }

};

int main()
{
    Transmisor tx("TX-Norte", 43.0);

    tx.mostrarEstado();
    tx.setPotencia(50.0); // debe rechazar

    std::cout << "Potencia actual: " << tx.getPotencia() << " dBm\n";

    tx.setPotencia(40.0); // debe aceptar

    std::cout << "Potencia actual: " << tx.getPotencia() << " dBm\n";

    tx.apagar();
    tx.encender();
    tx.mostrarEstado();

    Transmisor txPrueba("TX-Prueba", 80.0); // potencia inicial invalida

    std::cout << txPrueba.getNombre() << ": " << txPrueba.getPotencia() << "dBm\n";

    return 0;
}