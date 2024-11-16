#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    // Crear el archivo binario
    FILE* archivo = fopen("numsenteros.bin", "wb");

    int valor;
    do {
        printf("ingresa un numero entero (presiona 0 para terminar): ");
        scanf("%d", &valor);
        if (valor != 0) {
            fwrite(&valor, sizeof(int), 1, archivo);
        }
    } while (valor != 0);
    
    fclose(archivo);

    // Leer los valores desde el archivo
    archivo = fopen("numsenteros.bin", "rb");

    printf("numeros enteros almacenados en el archivo:\n");
    int valores;
    fread(&valores, sizeof(int), 1, archivo);
    while (!feof(archivo)) {
        printf("%d ", valores);
        fread(&valores, sizeof(int), 1, archivo);
    }

    fclose(archivo);

    return 0;
}
