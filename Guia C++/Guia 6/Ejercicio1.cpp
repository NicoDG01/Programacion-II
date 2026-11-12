#include <iostream>
#include <string>

class PuntoAcceso
{
private:
    std::string SSID;
    int Canal;
public:
    PuntoAcceso(std::string ssid, int c)
    {
        SSID = ssid;
        Canal = c;
    }
    void mostrar() const 
    {
        std::cout << "El nombre de la Red es: " << SSID << ", y el canal es: " << Canal << ".\n";
    }
};

int main()
{
    std::string ssidIngresado;
    int canalIngresado;

    std::cout << "Ingrese un nombre de Red: "; std::cin >> ssidIngresado;
    std::cout << "Ingrese un valor de un canal: "; std::cin >> canalIngresado;

    PuntoAcceso ap1(ssidIngresado, canalIngresado);
    PuntoAcceso ap2("WiFi_Invitados", 11);

    ap1.mostrar();
    ap2.mostrar();

    return 0;
}
