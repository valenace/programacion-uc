#include <string.h>
#include <cstdio>
#include <conio.h>
#include <iostream>

//Archivos
int main() {
	//Creacion del archivo
	FILE * arch; //definicion del tipo de dato puntero
	//Abrir archivo
	
	arch = fopen("DatosVarios.dat", "rb");
	
	if(arch == NULL){
		exit(1);
	}
	
	//Variables
	char letra;
	int numEntero;	
	float numFlotante;
	
	
	
	//Leer archivo    
    fread(&letra, sizeof(char), 1, arch);
    printf("Caracter: %c\n", letra);	 
    fread(&numEntero, sizeof(int), 1, arch);
    printf("Entero: %d\n", numEntero);
    fread(&numFlotante, sizeof(float), 1, arch);
    printf("Flotante: %.2f\n", numFlotante);
	
	//Cerrar archivo	
	fclose(arch);
	
	
	return 0;
	
}




