#include <iostream>
#include <string>

std::string IP;

bool formatoIpValido(std::string ip)
{
    int i;
    int cant=0;
    for (i = 0; i < ip.length(); i++)
    {
        if (ip[i] == '.')
        {
            cant++;
        }
        
    }
    if (cant == 3)
    {
        return true;
    }
    else
        return false;
}

int main ()
{
    std::cout << "Ingrese un numero de IP: "; std::cin >> IP;
    std::cout << formatoIpValido(IP) << "\n";
}