#include <stdio.h>
#include <stdlib.h>

// main recibe argc (cantidad de argumentos) y argv (arreglo con los textos de los argumentos).
int main(int argc, char *argv[]) {
    
    // Verificamos que el usuario haya pasado exactamente los argumentos necesarios:
    // argv[0] es el nombre del ejecutable (ej. ./copiar).
    // argv[1] debe ser el archivo de origen.
    // argv[2] debe ser el archivo de destino.
    if (argc != 3) {
        // Si no pasa 2 argumentos, le mostramos cómo debe usar el programa.
        printf("Uso correcto: %s <archivo_origen> <archivo_destino>\n", argv[0]);
        return 1; // Terminamos indicando error.
    }

    // Declaramos dos punteros a FILE: uno para leer el origen y otro para escribir el destino.
    FILE *pfOrigen;
    FILE *pfDestino;
    
    // Variable auxiliar entera para almacenar cada carácter leído (debe ser int por la macro EOF).
    int c;

    // Abrimos el archivo de origen en modo lectura ("r").
    pfOrigen = fopen(argv[1], "r");

    // Verificación obligatoria: comprobamos que el archivo de origen exista y se pueda abrir.
    if (pfOrigen == NULL) {
        printf("Error: No se pudo abrir o encontrar el archivo origen '%s'.\n", argv[1]);
        return 1;
    }

    // Abrimos el archivo de destino en modo escritura ("w" de write). 
    // Si el archivo no existe, lo crea; si ya existe, sobreescribe su contenido.
    pfDestino = fopen(argv[2], "w");

    // Verificación obligatoria: comprobamos que el sistema haya podido crear el archivo de destino.
    if (pfDestino == NULL) {
        printf("Error: No se pudo crear o abrir el archivo destino '%s'.\n", argv[2]);
        fclose(pfOrigen); // Cerramos el origen que sí habíamos abierto antes de abortar.
        return 1;
    }

    // Bucle de copia carácter por carácter:
    // 1. fgetc(pfOrigen) lee un byte del archivo origen y avanza el cursor.
    // 2. Se guarda ese valor en 'c' y se compara con EOF para saber si terminó el archivo.
    while ((c = fgetc(pfOrigen)) != EOF) {
        // fputc escribe ese carácter leído en el archivo de destino.
        fputc(c, pfDestino);
    }

    // Cerramos ambos archivos para liberar los recursos del sistema operativo y asegurar que se guarden los buffers.
    fclose(pfOrigen);
    fclose(pfDestino);

    // Mensaje de éxito opcional para darle feedback al usuario.
    printf("Archivo copiado exitosamente de '%s' a '%s'.\n", argv[1], argv[2]);

    // Retornamos 0 indicando terminación exitosa.
    return 0;
}