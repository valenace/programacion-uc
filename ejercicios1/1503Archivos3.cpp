#include <iostream>
#include <fstream>
#include <vector>

void cargarVector();
void recuperarArchivo();



int main() {
    
    cargarVector();
    recuperarArchivo();

    return 0;
}

void cargarVector(){
	FILE* archivo = fopen("vectores.bin", "wb");
	int vector[5] = {10, 20, 30, 40, 50};

    // Escribir los elementos del arreglo en el archivo
    fwrite(&vector, sizeof(int), 5, archivo);
	fclose(archivo);
}

void recuperarArchivo(){
	FILE *  archivo = fopen("vectores.bin", "rb");
	int vector[5];
	fread(&vector, sizeof(int), 5, archivo);
	int i;
	for (i = 0; i < 5; i++){
		printf ("Vector: %d \n", vector[i])	;
	}
	fclose(archivo);
}

