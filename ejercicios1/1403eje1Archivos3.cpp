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
	//Buscar en el archivo
	fseek(arch, 5, SEEK_SET);

	    
    
    float numero;
    fread(&numero, sizeof(float), 1, arch);
    printf("El valor es %f", numero);
    
    
	
	//Cerrar archivo	
	fclose(arch);
	
	
	return 0;
	
}




