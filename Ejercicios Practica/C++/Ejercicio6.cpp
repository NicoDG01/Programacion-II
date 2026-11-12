#include <iostream>
#include <string>

/* ====== DECLARÁ E IMPLEMENTÁ ACÁ LAS CLASES Antena y EstacionBase ====== */

class Antena {
private:
    double frecuencia;
    double ganancia;

public:
    Antena(double f, double g) : frecuencia(f), ganancia(g) {}

    void mostrar() const {
        std::cout << "Frecuencia: " << frecuencia << " MHz | Ganancia: " << ganancia << " dBi\n";
    }
};
class EstacionBase {
private:
    std::string nombre;
    Antena antena; // Atributo privado de tipo Antena

public:
    // Lista de inicialización obligatoria porque Antena no tiene constructor vacío
    EstacionBase(std::string n, Antena a) : nombre(n), antena(a) {}

    void mostrarResumen() const {
        std::cout << "Estacion: " << nombre << "\n";
        antena.mostrar(); // Delega la impresión a la clase Antena
    }

    std::string getNombre() const {
        return nombre;
    }
};

int main()
{
    Antena antena(2400, 15.0);

    EstacionBase estacion("Estacion-Norte", antena);
    estacion.mostrarResumen();

    std::cout << "Nombre: " << estacion.getNombre() << "\n";

    return 0;
}