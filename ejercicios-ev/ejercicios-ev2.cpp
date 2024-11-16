#include <stdio.h>
/*Programa en que ingrese 3 numeros,debe decir si es par o es impar cada n�mero y cuantos n�meros son pares y cuantos son impares.*/

int main() {
    int num1, num2, num3; // variables para almacenar los n�meros ingresados por el usuario
    int pares = 0; // variable pares para contar los n�meros pares
    int impares = 0; // variable impares para contar los n�meros impares

    //solicita al usuario que ingrese 3 n�meros
    printf("Ingrese tres numeros enteros: ");
    scanf("%d %d %d", &num1, &num2, &num3); // guarda los n�meros ingresados por el usuario en las variables correspondientes

    // incrementa el contador de n�meros pares o impares seg�n corresponda
    pares += num1 % 2 == 0;
    impares += num1 % 2 != 0;

    pares += num2 % 2 == 0;
    impares += num2 % 2 != 0;

    pares += num3 % 2 == 0;
    impares += num3 % 2 != 0;

    // imprime si cada n�mero es par o impar
    printf("El numero %d es %s.\n", num1, num1 % 2 == 0 ? "par" : "impar");
    printf("El numero %d es %s.\n", num2, num2 % 2 == 0 ? "par" : "impar");
    printf("El numero %d es %s.\n", num3, num3 % 2 == 0 ? "par" : "impar");

    //imprime el n�mero total de n�meros pares e impares ingresados por el usuario
    printf("Has ingresado %d numeros pares y %d numeros impares.\n", pares, impares);

    return 0;
}


