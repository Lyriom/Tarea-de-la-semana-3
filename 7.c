//Se hace la declaración de librerias utilizadas para este problema
#include <stdio.h>
//Se inicializa la funcion del main
int main() {
    // Se genera un for para poder imprimir los numeros enteros del 1 al 100
    for (int i = 1; i <= 100; i++)
    {
        //Se hace la declaracion de la variable que va a imprimir lo solicitado
        int c=0;
        c=i+c;
        printf("%d \n", c);
    }

    return 0;
}