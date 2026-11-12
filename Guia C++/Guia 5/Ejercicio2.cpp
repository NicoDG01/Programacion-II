#include <iostream>
#include <string>

int main ()
{
    std::string SSID;
    int canal;
    double frecuencia;
    std::cout << "Ingrese el nombre de la red: \n";
    std::cin >> SSID;
    std::cout << "Ingrese un canal: \n";
    std::cin >> canal;
    std::cout << "Ingrese una frecuencia: \n";
    std::cin >> frecuencia;
    std::cout << "El Nombre del canal ingresado es: " << SSID << ", el numero del canal es: " << canal << ", y la frecuencia es: " << frecuencia << "\n"; 
}


