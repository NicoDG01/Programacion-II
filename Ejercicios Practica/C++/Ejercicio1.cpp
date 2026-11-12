#include <iostream>

/* ====== DECLARÁ E IMPLEMENTÁ ACÁ LA CLASE Antena ====== */
class Antena
{
private:
    double frecuencia;
    double ganancia;
public:
    Antena(double f, double g)
    {
        frecuencia = f;
        ganancia = g;
    }
    double getGanancia() const
    {
        return ganancia;
    }
    double getFrecuencia() const
    {
        return frecuencia;
    }
    void mostrar()
    {
        std::cout << "La ganancia es: " << ganancia << " y la frecuencia es: " << frecuencia << " MHz\n";
    }
    void setGanancia(double gn)
    {
         ganancia = gn;
    }
};


int main()
{
    Antena antenaNorte(2400, 15.0);
    Antena antenaSur(900, 12.5);
    
    antenaNorte.mostrar();
    antenaSur.mostrar();
    antenaNorte.setGanancia(18.0);
    
    std::cout << "Nueva ganancia: " << antenaNorte.getGanancia() << " dBi\n";
    std::cout << "Frecuencia: " << antenaSur.getFrecuencia() << " MHz\n";

return 0;
}