#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;
    int sumatoria = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial *= i; // calcular el factorial del numero actual
        sumatoria += factorial; // agregar el factorial a la sumatoria total
    }

    printf("La sumatoria de los factoriales desde 1 hasta %d es %d \n", n, sumatoria);

    return 0;
}