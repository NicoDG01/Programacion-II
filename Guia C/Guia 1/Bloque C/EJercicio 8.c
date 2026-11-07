//Tabla de conversion entre Celsius y Fahrenheit
#include <stdio.h>

int a,F,C,i;
int main()
{
    printf("A continuacion se va a mostrar una tabla de conversion entre °C y °F\n");
    printf("\t°C\t°F\n");
    printf("\t--\t--\n");   
    F = 32;
    C = 0;
    printf("\t%d\t%d\n",C,F);
  
    while (F < 300)
    {
        printf("\t%d\t%d\n",C,F);
        F += 20;
        C = (5*(F-32))/9;          
    }
    
}