#include <iostream>
#include <string.h>



int main()
{
	char contrasena[50];
 	char valida[50] = "27mOk";
 	
 	printf("Introduzca la contrasena: ");
 	scanf("%s",&contrasena);
 	
 	
	if(strcmp(contrasena, valida) == 0){
		printf("Contrasena valida");
	}else{
		printf("Contrasena invalida :( ");
	}
 
}
