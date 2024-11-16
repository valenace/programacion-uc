#include <string.h>
#include <cstdio>
#include <conio.h>
#include <iostream>

//Archivos
int main() {
	//Creacion del archivo
	FILE * arch; //definicion del tipo de dato puntero
	//Abrir archivo
	arch = fopen("DatosVarios.dat", "wb"); //wb si no existe, lo crea. si existe borra los datos y lo abre
	
	if(arch == NULL){
		exit(1);
	}
	
	//Variables
	char letra = 'a';
	int numEntero = 20;	
	float numFlotante = 15.87;
	
	//Escribir en el archivo	
	/*
	fwrite(&letra, sizeof(char), 1, arch); //el numero es la cantidad de caracteres	
	fwrite(&numEntero, sizeof(int), 1, arch);
	fwrite(&numFlotante, sizeof(float), 1, arch);
	*/
	
	//Leer archivo    
    fread(&letra, sizeof(char), 1, arch);
    printf("Caracter: %c\n", letra);	 
    fread(&numEntero, sizeof(int), 1, arch);
    printf("Entero: %d\n", numEntero);
    fread(&numFlotante, sizeof(float), 1, arch);
    printf("Flotante: %.2f\n", numFlotante);
	
	//Cerrar archivo	
	fclose(arch);
	
	printf("Archivo creado exitosamente");
	
	
	return 0;
	
}




