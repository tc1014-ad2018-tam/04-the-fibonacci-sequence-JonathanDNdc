/*
 * Este programa mandara a pantalla la secuencia Fibonacci
 * hasta el termino dado por el usuario (Con un limite de 47 terminos).
 *
 * Autor: Jonathan Nuñez de Caceres
 * Fecha: 3 de Septiembre del 2018
 * Correo: A01411277@itesm.mx
 */

#include <stdio.h>

int main() {
    // Declaracion de variables
    int n;
    int num1 = 0;
    int num2 = 1;
    int sum;

    // Se le pide el termino al usuario.
    printf("Enter the number of terms:");
    scanf("%d", &n);

    printf("The first %d terms of the Fibonacci Sequence are:\n", n);

    // Aqui empieza el ciclo for.
    for(int i = 1; i <= n; i++){
        printf("%d: %d\n", i, num1);
        // En esta variable se guarda la suma del num1 y del num2.
        sum = num1 + num2;
        // La variable 1 se iguala a la variable 2 y la 2 a la suma,
        // esto con el fin de recorrer los terminos.
        num1 = num2;
        num2 = sum;
    }

    // Se termina el programa.
    return 0;
}