#include <cstdio>
#include <string.h>
#include <iostream>
#include <cmath>
#include <cstdlib>

//Programa para registrar, leer y buscar migrantes

int main() {
	
	// Definición de la estructura Migracion
    struct migs {
	    char nombre[20],apellido[20],nacionalidad[20],sexo[20];
	    int clave;
		int edad;
	    float peso;
	}migs[5]; //Solo 5 migrantes

	//	Declaración de variables
	int cl,i;
	int id = 1; // id igual a 1 para asignar los ids autoincrementables a los registros
	char opcion;
	
	 do {   
	 	//Menu para realizar acciones	
        printf("menu de opciones:\n");
        printf("a) Registrar\n");
        printf("b) Buscar\n");
        printf("c) Ver listado completo \n");
        printf("d) Salir\n");
        printf("Ingrese una opcion: ");
        scanf(" %c", &opcion); //almacenar la opcion ingresada
        
		
		//acciones
        switch (opcion) {  
		    //Registro de migrante	
            case 'a': 
				//verifica si ya se han registrado más de 4 registros
            	if (id > 5){
            		//Si es verdadero
            		printf("Esta lleno el lugar ");	
				}
				else{
					//Si es falso, REGISTRA
					
					/* asignando el valor de id al campo clave del arreglo migs 
					en el índice especificado por id*/
					migs[id].clave = id;
	    			
	    			printf("\n Ingrese nombre: "); // mensaje pidiendo al usuario que ingrese unombre
	    			fflush(stdin); //Limpiar el bufer
	    			gets(migs[id].nombre); // leer cadena desde stdin y almacenar en el campo
	    			
	    			printf("\n Ingrese apellido: ");  // mensaje pidiendo al usuario que ingrese apellido
	    			fflush(stdin); //Limpiar el bufer
	    			gets(migs[id].apellido); // leer cadena desde stdin y almacenar en el campo
	    			
	    			printf("\n Ingrese nacionalidad: ");  // mensaje pidiendo al usuario que ingrese nacionalidad
	    			fflush(stdin); //Limpiar el bufer
	    			gets(migs[id].nacionalidad); // leer cadena desde stdin y almacenar en el campo
	    			
	    			printf("\n Ingrese sexo: ");  // mensaje pidiendo al usuario que ingrese sexo
	    			fflush(stdin); //Limpiar el bufer
	    			gets(migs[id].sexo); // leer cadena desde stdin y almacenar en el campo
	    			
	    			printf("\n Ingrese edad: ");  // mensaje pidiendo al usuario que ingrese edad
	    			fflush(stdin); //Limpiar el bufer
	    			scanf("%d", &migs[id].edad); // leer entero desde stdin y almacenar en el campo
	    			
	    			printf("\n Ingrese peso: ");  // mensaje pidiendo al usuario que ingrese peso
	    			fflush(stdin); //Limpiar el bufer
	    			scanf("%f", &migs[id].peso); // leer flotante desde stdin y almacenar en el campo
					
					id++;
					printf("Registro exitoso.\n");
				}
            break;
            
            //Búsqueda de migrante    
            case 'b': 
            	// Verificar si hay registros
				if (id > 1){ //Si es verdadero, si hay registros
					printf("Ingrese el id (1-%d): ", id - 1); //mensaje que ingrese el nro de id entre los valores especificados
		        	scanf(" %d", &cl); //leer y almacenar el id ingresado en campo cl
						 
					// si el id ingresado es válido (entre 1 y el último id registrado)
		        	if (cl >= 1 && cl < id) { //Si es verdadero
		        		//Muestra los datos almacenados en el id del migrante
	                    printf("Nombre: %s \n", migs[cl].nombre);
			        	printf("Apellido: %s \n", migs[cl].apellido);
			        	printf("Nacionalidad: %s \n", migs[cl].nacionalidad);
			        	printf("Sexo: %s \n", migs[cl].sexo);
			        	printf("Edad: %d \n", migs[cl].edad);
			        	printf("Peso: %f \n", migs[cl].peso);
	                } else { //Si es falso
	                    printf("ID invalido \n");
	                }	
				}
				else { //Si es falso, no hay registros
	                printf("No hay registros \n");
	            }				
			break;           	
            
                
            case 'c': 
            	// Verificar si hay registros
				if (id > 1){ //Si es verdadero, si hay registros    
					// iterar a traves de los registros desde 1 hasta el ultimo registrado       	
	            	for (i = 1; i < id; ++i) {
	            		//Muestra los datos almacenados en CADA UNO de los ids de los migrantes
	                    printf("Registro %d:\n", i); //muestra id
	                    printf("Nombre: %s\n", migs[i].nombre);
	                    printf("Apellido: %s\n", migs[i].apellido);
	                    printf("Nacionalidad: %s\n", migs[i].nacionalidad);
	                    printf("Sexo: %s \n", migs[i].sexo);
	                    printf("Edad: %d \n", migs[i].edad);
	                    printf("Peso: %f \n", migs[i].peso);
	                    printf("\n");
	                }
	            }
				else { //Si es falso, no hay registros
	                printf("No hay registros \n");
	            }
            break;
            	
            case 'd':
            	//Salir del programa
            	printf("Salida del programa \n");            
            break;                
                
            default:
            	//Si insertó un dígito distinto al solicitado
                printf("Opcion invalida. Intente nuevamente.\n");
			
        }
        
		system("pause"); // pausar la ejecución del programa hasta que presione una tecla
		system("cls");  // limpiar la pantalla de la consola
    }
	while (opcion != 'd'); // hacer mientras la opcion no sea letra d    

    return 0;
}

