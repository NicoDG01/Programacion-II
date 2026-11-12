#include <iostream>
#include <string>

class Cable
{
private:
    double longitudMetros;
    double atenuacionPorMetros;
public:
    Cable(double lM, double aPM)
    {
        longitudMetros = lM;
        atenuacionPorMetros = aPM;
    }
    double atenuacionTotal() const 
    {
        return longitudMetros*atenuacionPorMetros;
    }
};

int main()
{
    double longi;
    double factorate;

    std::cout << "Ingrese cantidad de cable en metros: "; std::cin >> longi;
    std::cout << "Ingrese el factor de atenuacion: "; std::cin >> factorate;

    Cable c1(longi, factorate);

    std::cout << "La atenuacion total es: " << c1.atenuacionTotal() << "\n";
} 