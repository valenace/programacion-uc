#include <string.h>
#include <cstdio>
#include <conio.h>
#include <iostream>

//Archivos
int main() {
	//Creacion del archivo
	FILE * arch; //definicion del tipo de dato puntero
	//Abrir archivo
	
	//al momento de escribir
	arch = fopen("DatosVarios.dat", "wb"); //wb si no existe, lo crea. si existe borra los datos y lo abre
	

	
	if(arch == NULL){
		exit(1);
	}
	
	//Variables
	char letra = 'a';
	int numEntero = 15;	
	float numFlotante = 20.678;
	
	//Escribir en el archivo	
	
	fwrite(&letra, sizeof(char), 1, arch); //el numero es la cantidad de caracteres	
	fwrite(&numEntero, sizeof(int), 1, arch);
	fwrite(&numFlotante, sizeof(float), 1, arch);
	//Cerrar archivo	
	fclose(arch);
	
	printf("Archivo creado exitosamente");
	

	
	return 0;
	
}




