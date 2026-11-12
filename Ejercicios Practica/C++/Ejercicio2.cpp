#include <iostream>
#include <string>

/* ====== DECLARÁ E IMPLEMENTÁ ACÁ LA CLASE Sensor ====== */

class Sensor
{
private:
    std::string nombre;
    double valorActual;
public:
    Sensor(std::string n, double vA)
    {
        nombre = n;
        valorActual = vA;
    }
    void setValor(double v)
    {
        if (-40 < v && v < 85)
            valorActual = v;
        else
            std::cout << "Valor fuera del rango\n";
            valorActual;
    }
    std::string getNombre() const
    {
        return nombre;
    }
    double getValor() const
    {
        return valorActual;
    }
    void mostrar() const
    {
        std::cout << "Sensor " << nombre << ", valor " << valorActual << " grados C\n";
    }

};

int main()
{
    Sensor sensorTemp("Temperatura", 25.0);
    Sensor sensorRack("Temp-Rack", 40.0);

    sensorTemp.setValor(30.0);
    
    std::cout << sensorTemp.getNombre() << ": " << sensorTemp.getValor() << "\n";
    
    sensorTemp.setValor(100.0); // debe rechazar (fuera de rango)
    
    std::cout << sensorTemp.getNombre() << ": " << sensorTemp.getValor() << "\n";

    sensorRack.mostrar();
    
    return 0;
}