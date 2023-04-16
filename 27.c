#include <stdio.h>

int main() {
    int num1, num2, cant1 = 0, cant2 = 0; // Definimos las variables a utilizar

    // Pedimos al usuario que ingrese los dos números
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    // Contamos la cantidad de dígitos de num1
    while (num1 != 0) {
        cant1++; // Aumentamos el contador de dígitos
        num1 /= 10; // Dividimos el número por 10 para eliminar el último dígito
    }

    // Contamos la cantidad de dígitos de num2
    while (num2 != 0) {
        cant2++; // Aumentamos el contador de dígitos
        num2 /= 10; // Dividimos el número por 10 para eliminar el último dígito
    }

    // Comparamos las cantidades de dígitos y mostramos el resultado
    if (cant1 > cant2) {
        printf("El primer número tiene mas digitos que el segundo.\n");
    } else if (cant2 > cant1) {
        printf("El segundo numero tiene mas digitos que el primero.\n");
    } else {
        printf("Ambos numeros tienen la misma cantidad de digitos.\n");
    }

    return 0; // Indicamos que el programa finalizó correctamente
}

