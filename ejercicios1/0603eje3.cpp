#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
    int contador = 0;
    float sumaTemperaturas = 0.0;
    float temperatura;

    
    printf("Ingrese las temperaturas en grados centigrados (0 para terminar) \n");

    while (true) {
        printf("Temperatura:");
    	scanf("%f", &temperatura);

        if (temperatura == 0) {
            break; // Salir del bucle si se ingresa 0
        }

        sumaTemperaturas += temperatura;
        contador++;
    }

    if (contador > 0) {
        float promedio = sumaTemperaturas / contador;
        printf("El promedio de las temperaturas ingresadas es: %.2f grados centígrados.\n", promedio);
    } else {
        printf("No se ingresaron temperaturas válidas.\n");
    }

    return 0;
}
