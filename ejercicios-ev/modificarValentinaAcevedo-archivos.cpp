#include <iostream>
#include <fstream>

int main() {
    /*----- crear un archivo binario en modo "wb" -----*/
    FILE* arch_bin = fopen("datos.bin", "wb");
    

	/*----- grabar 3 numeros enteros en el archivo -----*/
    
    // variables para grabar
    int numEntero1 = 34;
    int numEntero2 = 168;
    int numEntero3 = 4;
    // grabar en el archivo
    fwrite(&numEntero1, sizeof(numEntero1), 1, arch_bin);
    fwrite(&numEntero2, sizeof(numEntero2), 1, arch_bin);
    fwrite(&numEntero3, sizeof(numEntero3), 1, arch_bin);

    // cerrar el archivo
    fclose(arch_bin);
    printf("Datos registrados: %d, %d, %d\n", numEntero1, numEntero2, numEntero3);


    /*----- abrir el archivo en modo "r+b" para modificar -----*/
  	arch_bin = fopen("datos.bin", "r+b");

    // mover el puntero al segundo entero )
    fseek(arch_bin, sizeof(int), SEEK_SET);
    // Leer el valor actual del segundo entero   
    int nuevoNumEntero;
    fread(&nuevoNumEntero, sizeof(int), 1, arch_bin);
    // Modificar el segundo entero
    nuevoNumEntero = 84;
    fseek(arch_bin, sizeof(int), SEEK_SET);
    fwrite(&nuevoNumEntero, sizeof(int), 1, arch_bin);
    

    
    // leer los tres enteros del archivo
    fseek(arch_bin, 0, SEEK_SET);
    int entero1, entero2, entero3;
    fread(&entero1, sizeof(int), 1, arch_bin);
    fread(&entero2, sizeof(int), 1, arch_bin);
    fread(&entero3, sizeof(int), 1, arch_bin);

    // mostrar los tres enteros
    printf("Datos con 2do entero modificado: %d, %d, %d\n", entero1, entero2, entero3);

    // cerrar el archivo
    fclose(arch_bin);
    return 0;
}
