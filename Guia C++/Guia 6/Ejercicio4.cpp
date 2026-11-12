#include <iostream>
#include <string>

class Bateria
{
private:
    double Voltaje;
    double capacidadAh;
public:
    Bateria(double V, double cAh)
    {
        Voltaje = V;
        capacidadAh = cAh;
    }
    Bateria()
    {
        Voltaje = 0;
        capacidadAh = 0;
    }
    void mostrar() const
    {
        std::cout << "El voltaje de la bateria es: " << Voltaje << ", y la capacidad en amperhora es: " << capacidadAh << "\n";
    }
};

int main()
{
    double Vol,Am;
    std::cout << "Ingrese el voltaje de la bateria: "; std::cin >> Vol; 
    std::cout << "Ingrese la capacidad en AmperesHora: "; std::cin >> Am ;

    Bateria b1(Vol, Am);
    Bateria b2;

    b1.mostrar();
    b2.mostrar();
}