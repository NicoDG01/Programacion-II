#include <iostream>
#include <string>

class Router
{
private:
    double potencia;
public:
    Router(double p)
    {
        potencia = 0;
    }
    double setPotencia(double p)
    {
        if (0 < p && p <=30)
        {
            return potencia = p;
        }
        else   
            std::cout << "Potencia fuera de los limites\n";
            return potencia ;
        
    }
    void getPotencia() const
    {
        std::cout << "La potencia es: " << potencia << " dBm\n";
    }
};

int main()
{  
    double potenciaindicada;

    std::cout << "Ingrese un valor de potencia determinado: "; std::cin >> potenciaindicada;

    Router p1(potenciaindicada);

    p1.setPotencia(potenciaindicada);
    p1.getPotencia();
}