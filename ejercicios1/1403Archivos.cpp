#include <iostream>
#include <fstream>

int main() {
    // Crear un archivo binario en modo "wb"
    FILE* arch_bin = fopen("datos.bin", "wb");


    // grabar 3 numeros enteros en el archivo
    int numEntero1 = 34;
    int numEntero2 = 168;
    int numEntero3 = 4;
    fwrite(&numEntero1, sizeof(numEntero1), 1, arch_bin);
    fwrite(&numEntero2, sizeof(numEntero2), 1, arch_bin);
    fwrite(&numEntero3, sizeof(numEntero3), 1, arch_bin);

    // cerrar el archivo
    fclose(arch_bin);

    // abrir en modo "ab"
    arch_bin = fopen("datos.bin", "ab");

    // grabar un float al archivo
    float numeroFloat = 4.88;
    fwrite(&numeroFloat, sizeof(numeroFloat), 1, arch_bin);

    // cerrar el archivo
    fclose(arch_bin);

    // abrir el archivo en modo "rb" para leer
    arch_bin = fopen("datos.bin", "rb");

    // leer los 4 datos del archivo
    
    //variables para lectura
    int numeroEnteroL1, numeroEnteroL2, numeroEnteroL3;
    float numeroFloatL;
    
    // leer el archivo
    fread(&numeroEnteroL1, sizeof(numeroEnteroL1), 1, arch_bin);
    fread(&numeroEnteroL2, sizeof(numeroEnteroL2), 1, arch_bin);
    fread(&numeroEnteroL3, sizeof(numeroEnteroL3), 1, arch_bin);
    fread(&numeroFloatL, sizeof(numeroFloatL), 1, arch_bin);

    // mostrar los datos 
    printf("Enteros: %d, %d, %d \n", numeroEnteroL1, numeroEnteroL2, numeroEnteroL3);
    printf("Float: %f \n", numeroFloatL);

    // cerrar el archivo
    fclose(arch_bin);

    return 0;
}
