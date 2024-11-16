#include <cstdio>

int main() {
long posicion;

    
    // Crear el archivo binario
    FILE* archivo = fopen("numsenteros.bin", "wb");

    // Ingresar tres valores enteros desde el teclado
    int valor1, valor2, valor3;
    printf("Ingresa el primer numero: ");
    scanf("%d", &valor1);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &valor2);
    printf("Ingresa el tercer numero: ");
    scanf("%d", &valor3);

    // Escribir los valores en el archivo
    fwrite(&valor1, sizeof(valor1), 1, archivo);
    posicion = ftell(archivo);
    fwrite(&valor2, sizeof(valor2), 1, archivo);
    posicion = ftell(archivo);
    fwrite(&valor3, sizeof(valor3), 1, archivo);
    posicion = ftell(archivo);
    

    // Obtener la posición actual del puntero de archivo
    posicion = ftell(archivo);
    printf("Posicion del puntero de archivo: %ld\n", posicion);

    // Cerrar el archivo
    fclose(archivo);

    // Abrir el archivo en modo lectura binaria
    
    archivo = fopen("numsenteros.bin", "rb");



printf("numeros enteros almacenados en el archivo:\n");
    int valor;
    fread(&valor, sizeof(int), 1, archivo);
    while (!feof(archivo)) {
    	posicion = ftell(archivo);
    	printf("el valor es %d y la posicion es: %d \n ", valor, posicion);
              
        fread(&valor, sizeof(int), 1, archivo);
    }
    // Cerrar el archivo
    fclose(archivo);

    return 0;
}

