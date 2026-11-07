//Faltaba el #include <stdio.h>
#include <stdio.h>

int main (void)
{
    int a = 0, b = 1;
    
    if (a == b)
        {a++;
        b++;} //Faltaban los corchetes de el if y el else
    else
       { b--;}
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
