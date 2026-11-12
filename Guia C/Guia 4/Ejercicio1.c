#include <stdio.h>
#include <stdlib.h>

int main() {
    // Arreglo de caracteres para almacenar el nombre del archivo ingresado por el usuario.
    char nombreArchivo[100];
    
    // Declaración del puntero a FILE que gestionará el flujo del archivo.
    FILE *pf;
    
    // Variable entera para almacenar cada carácter leído. 
    // IMPORTANTE: Debe ser 'int' (y no 'char') porque la macro EOF devuelve un valor entero negativo (-1) 
    // que podría no distinguirse correctamente si se almacena en un 'char' sin signo.
    int c;

    // Solicitamos al usuario que ingrese el nombre o ruta del archivo de texto.
    printf("Ingrese el nombre del archivo de texto: ");
    
    // Leemos el nombre del archivo de la entrada estándar (consola).
    // Usamos %99s para evitar un desbordamiento de búfer (buffer overflow) si el usuario escribe más de 99 caracteres.
    if (scanf("%99s", nombreArchivo) != 1) {
        printf("Error al leer el nombre ingresado.\n");
        return 1;
    }

    // Abrimos el archivo en modo lectura ("r" de read).
    pf = fopen(nombreArchivo, "r");

    // Verificación obligatoria: si fopen falla (ej. el archivo no existe o no hay permisos), devuelve NULL.
    if (pf == NULL) {
        printf("Error: No se pudo abrir o encontrar el archivo '%s'.\n", nombreArchivo);
        return 1; // Terminamos la ejecución informando un error al sistema operativo.
    }

    // Bucle de lectura: fgetc lee un carácter y avanza el cursor. 
    // El ciclo se repite hasta que fgetc encuentra el fin de archivo (EOF).
    while ((c = fgetc(pf)) != EOF) {
        putchar(c); // Imprime el carácter actual directamente por la salida estándar (consola).
    }

    // Es una buena práctica fundamental cerrar el archivo al terminar para liberar los recursos del sistema.
    fclose(pf);

    // Retornamos 0 para indicar que el programa finalizó con éxito.
    return 0;
}