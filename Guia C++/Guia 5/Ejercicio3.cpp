#include <iostream>

int RSRP;

int main()
{
    std::cout << "Ingrese una valor de RSRP: ";
    std::cin >> RSRP;
    if (RSRP > -80)
        std::cout << "Excelente\n";
    else if (RSRP > -95)
        std::cout << "Buena\n";
    else if (RSRP > -110)
        std::cout << "Debil\n";
    else
        std::cout << "Sin Cobertura\n";
}