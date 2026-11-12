#include <iostream>
#include <string>

class Suscriptor
{
private:
    double datosDisponiblesGB;
public:
    Suscriptor(double DGB)
    {
        if (DGB <0)
            datosDisponiblesGB = 0;
        else
            datosDisponiblesGB = DGB;
    }
    void getDatosDisponiblesGB() const {
        std::cout << "Hay " << datosDisponiblesGB << " gb para usar\n";
    }
    void consumir(double gb)
    {
        if (gb < 0)
        {
            std::cout << "El consumo no puede ser negativo\n";
            return;
        }
        if (gb > datosDisponiblesGB)
        {
            std::cout << "Ya se consumieron todos los dato y quedaron " << gb-datosDisponiblesGB << " gb por consumir\n";
            datosDisponiblesGB=0;
        }
        else
            datosDisponiblesGB -= gb;
            if (datosDisponiblesGB == 0)
            {
                std::cout << "Quedaron 0 gb disponibles\n";
            }
            else
                std::cout << "Quedaron: " << datosDisponiblesGB << " gb por consumir\n";
    }

};

int main()
{   
    double cantGB, consuGB;

    std::cout << "Ingrese su cantidad de datos en GB disponibles: "; std::cin >> cantGB;

    Suscriptor user1(cantGB);
    user1.getDatosDisponiblesGB();


    std::cout << "Ingrese el consumo de datos en GB: "; std::cin >> consuGB;
    user1.consumir(consuGB);
    user1.getDatosDisponiblesGB();
}