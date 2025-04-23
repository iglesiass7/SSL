#include <stdio.h>

int main(void)
{
<<<<<<< HEAD
    FILE *archivo;
    archivo = fopen("output.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    fprintf(archivo, "Hola Mateo Iglesias!");
    fclose(archivo);
=======
>>>>>>> d637e8a (Corrijo hello.c para escribir en stdout con printf)
    printf("Hola Mateo Iglesias!");
    return 0;
}
