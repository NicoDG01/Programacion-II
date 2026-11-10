#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//Para incluir mi biblioteca es con ""
#include  "Funciones.h"

int a,b,c;

int main(int argc, char *argv[]){
    if (argc != 4)
        printf("Tiene que ingresar 3 valores, es el nombre del archivo y tres valores mas\n");
    else    
        {
            int d, e, f;
            d = atoi(argv[1]);
            e = atoi(argv[2]);
            f = atoi(argv[3]);
            Maximovalor(d,e,f);
        }
}