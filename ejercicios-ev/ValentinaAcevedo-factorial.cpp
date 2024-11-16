#include <stdio.h>


// Prototipo de la funcion recursiva para calcular el factorial de un número
// unsigned long long int para evitar desbordamientos
unsigned long long int factorial(int n);


int main() {
    int numero; //variable 

    printf("Ingresa un numero: ");
    scanf("%d", &numero); //almacenar numero

    // llamada a la función factorial y mostramos el resultado
    printf("Factorial de %d es: %d\n", numero, factorial(numero));
    return 0;
}

// funcion recursiva para calcular el factorial de un número
unsigned long long int factorial(int n) {
    if (n < 0)
        return 0; // Si el numero es negativo, el factorial es 0
    else if (n > 1)
        return n * factorial(n - 1); // formula recursiva: n! = n * (n-1)!
    return 1; // el factorial de 0 es 1
}
