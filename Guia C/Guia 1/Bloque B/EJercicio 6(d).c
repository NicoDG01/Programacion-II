#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 10; i++){
        if (i < 5)
            continue;
        printf("%d\n", i);
    }
    return 0;
}
//Va arrancar desde 5 a 9 ya que cuando es menor que 5 lo que hace es continuar el for gracias continue