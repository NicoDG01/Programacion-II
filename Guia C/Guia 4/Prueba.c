#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

//Esto define el archivo, es un *, por cada archivo
FILE *f;

int main(){
    f = fopen("entrada.txt", "w+");
    f = fopen("entrada.txt", "r");
    if (f == NULL) /* SIEMPRE hay que comprobar el resultado */
        {
            printf("Error: no se encuentra el archivo.");
            return -1;
        }   
}

