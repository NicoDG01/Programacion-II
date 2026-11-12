#include <iostream>

/* ====== DECLARÁ E IMPLEMENTÁ ACÁ LA CLASE Bateria ====== */

class Bateria
{
private:
    double voltaje;
    int porcentajeCarga;
public:
    Bateria(double v, int pC)
    {
        voltaje = v;
        porcentajeCarga = pC;
    }
    void mostrarEstado() const
    {
        std::cout << "El voltaje es: " << voltaje << " y la bateria que tiene es: " << porcentajeCarga << "\n";
        if (porcentajeCarga < 20)
            std::cout << "Bateria baja, se recomienda cargar la bateria\n";
    }
    void consumir(int C)
    {
        if (porcentajeCarga - C >= 0)
             porcentajeCarga -= C;
        else 
             porcentajeCarga = 0;
    }
    void cargar(int C)
    {
        if (C+porcentajeCarga <= 100)   
             porcentajeCarga += C;
        else
             porcentajeCarga = 100;
    }
};

int main()
{
    Bateria bateria(12.6, 85);

    bateria.mostrarEstado();
    bateria.consumir(70);
    bateria.mostrarEstado();
    bateria.cargar(50);
    bateria.mostrarEstado();
    bateria.consumir(200); // no debe bajar de 0
    bateria.mostrarEstado();

    return 0;
}