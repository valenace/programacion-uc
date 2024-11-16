#include <iostream>

int main() {
    
    int contador = 0;
    while (contador < 10) {
        printf("Contador: %d\n", contador);
        contador++;
    }

    
    for (int i = 0; i < 5; i++) {
        printf("Valor de i: %d\n", i);
    }

    
    int numero = 42;
    printf("El número es: %d\n", numero);

    
    int edad;
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);
    printf("Tienes %d años.\n", edad);

    return 0;
}
