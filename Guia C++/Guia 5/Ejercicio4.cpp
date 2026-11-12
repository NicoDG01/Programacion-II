#include <iostream>
#include <string>

int Eleccion;
int i;
int main()
{
    std::cout << "Ingrese el tipo de red que desesa, elige el numero nada mas; 1=Wifi, 2=4G, 3=5G, 4=Ethernet: ";
    std::cin >> Eleccion;
    switch (Eleccion)
    {
    case 1:
        std::cout << "La red elegida es Wifi\n";
        break;
    case 2:
        std::cout << "La red elegida es 4G\n";
        break;
    case 3:
        std::cout << "La red elegida es 5G\n";
        break;
    case 4:
        std::cout << "La red elegida es Ethernet\n";
        break;
    default:
        std::cout << "No elegio ninguna red disponible\n";
        return 0;
    }
    for (i = 0; i < 8; i++)
    {
        std::cout << "Las mediciones de la red son: " << rand() %50 + 5 << "\n";
    }
}