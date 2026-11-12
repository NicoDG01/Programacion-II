#include <iostream>

struct Medicion
{
    int canal;
    double rssi;
};

int main ()
{
    int i;
    Medicion Mediciones[5]
    {
        {5,-75},
        {6,-76.4},
        {11,-69},
        {12,-80},
        {14,-74},
    };
    for (i = 0; i < 5; i++)
    {
        std::cout << "El canal es: " << Mediciones[i].canal << " y el rssi: " << Mediciones[i].rssi << "\n";
    }
    return 0;
}
