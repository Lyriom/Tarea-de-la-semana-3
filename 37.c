#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 10; i++) { // bucle exterior para las filas, desde 1 hasta 10
        printf("Tabla del %d:\n", i); // imprimir el encabezado de la tabla actual
        for (j = 1; j <= 10; j++) { // bucle interior para las columnas, desde 1 hasta 10
            printf("%d x %d = %d\n", i, j, i*j); // imprimir la multiplicación correspondiente
        }
        printf("\n"); // imprimir una línea en blanco después de cada tabla para separarlas
    }

    return 0;
}
