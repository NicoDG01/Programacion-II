#include <iostream>
#include <string>

class PuntoAcceso
{
private:
    std::string ssid;
    double canal;
public:
    PuntoAcceso(std::string s, double c): ssid(s), canal(c){}
    void mostrar() const
    {
        std::cout << "El nombre de red es: " << ssid << ", y el canal es: " << canal << "\n";
    }
};

int main()
{
    PuntoAcceso red1("Flia", 54);
    red1.mostrar();
}