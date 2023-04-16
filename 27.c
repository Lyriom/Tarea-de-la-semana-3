#include <stdio.h>

int main() {
    int num1, num2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    int cant_digitos_num1 = 0;
    int cant_digitos_num2 = 0;

    int temp = num1;
    while(temp != 0) {
        cant_digitos_num1++;
        temp /= 10;
    }

    temp = num2;
    while(temp != 0) {
        cant_digitos_num2++;
        temp /= 10;
    }

    if(cant_digitos_num1 > cant_digitos_num2) {
        printf("El primer numero tiene mas digitos que el segundo.\n");
    } else if(cant_digitos_num1 < cant_digitos_num2) {
        printf("El segundo numero tiene mas digitos que el primero.\n");
    } else {
        printf("Ambos numeros tienen la misma cantidad de digitos.\n");
    }

    return 0;
}
