#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
        
        if (i == 4)
            break;
    }

    return 0;
}
//Va a contar hasta 4 y va a cortar gracias a break se corta en 4
