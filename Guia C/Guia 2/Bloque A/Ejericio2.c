#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

char letra[50];
char nueva[50];
int i;
int j=0;

int main(){
    printf("Ingrese una palabraa: "); gets(letra);
    for (i = strlen(letra)-1; i >= 0; i--)
    {
        nueva[j] = letra[i];
        j++;
    }
    nueva[j] = '\0';
    printf("Invertida %s\n",nueva);
    
}