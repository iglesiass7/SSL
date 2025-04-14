#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *archivo;
    archivo = fopen("output.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    fprintf(archivo, "Hola Mateo Iglesias!");
    fclose(archivo);
    printf("Archivo creado con exito.\n");
    return 0;
}
