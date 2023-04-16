#include <stdio.h>

int main() {
    int x, y, i, suma_2 = 0, suma_5 = 0;
    float promedio_2;

    printf("Ingrese el valor de x: ");
    scanf("%d", &x);

    printf("Ingrese el valor de y: ");
    scanf("%d", &y);

    // Calculamos los x primeros múltiplos de 2 y su suma
    for (i = 1; i <= x; i++) {
        suma_2 += 2 * i;
    }

    // Calculamos el promedio de los x primeros múltiplos de 2
    promedio_2 = (float) suma_2 / x;

    // Calculamos la suma de los y primeros múltiplos de 5
    for (i = 1; i <= y; i++) {
        suma_5 += 5 * i;
    }

    // Comparamos el promedio de los x primeros múltiplos de 2 con la suma de los y primeros múltiplos de 5
    if (promedio_2 > suma_5) {
        printf("El promedio de los %d primeros multiplos de 2 es mayor que la suma de los %d primeros multiplos de 5.\n", x, y);
    } else {
        printf("La suma de los %d primeros multiplos de 5 es mayor o igual que el promedio de los %d primeros multiplos de 2.\n", y, x);
    }

    return 0;
}