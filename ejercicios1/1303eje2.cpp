#include <string.h>
#include <cstdio>
#include <conio.h>
#include <stdlib.h>

//Estructura

struct Producto {
	int codigo;
	char descripcion[50];
	float precio;
};
// Prototipos
struct Producto cargar();
void imprimir(struct Producto pro);


int main() {
	struct Producto pro1, pro2;
	
	pro1 = cargar();
	pro2 = cargar();
	
	imprimir(pro1);
	imprimir(pro2);
	getch();
	return 0;
	
}

//Funciones
struct Producto cargar(){
	struct Producto pro;
	
	printf("Ingrese el codigo del producto: \n");
	scanf("%d", &pro.codigo);
	
	printf("Ingrese la descripcion del producto: \n");
	fflush(stdin);
	gets(pro.descripcion);
	
	printf("Ingrese el precio del producto: \n");
	scanf("%f", &pro.precio);
	
	return pro;
}
void imprimir(struct Producto pro){
	printf("Datos del producto \n");
	printf("Codigo: %d \n", pro.codigo);
	printf("Descripcion: %s \n ", pro.descripcion);
	printf("Precio: %f \n ", pro.precio);
	printf("------------------ \n");
	
	
}


