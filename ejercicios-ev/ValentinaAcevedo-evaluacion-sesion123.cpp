#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>

//Menu para realizar operaciones arimetricas
int main() {
	//Declaraciones de variables
    char opcion;
    double num1, num2, resultado;

    do {   	
        printf("menu de opciones:\n");
        printf("a) Suma\n");
        printf("b) Division\n");
        printf("c) Modulo\n");
        printf("d) Salir\n");
        printf("Ingrese una opcion: ");
        scanf(" %c", &opcion); //almacenar la opcion ingresada
        
		system("cls"); //limpiar consola  
		
        switch (opcion) {  
		     	
            case 'a': 
            //Suma
                printf("Ingrese dos numeros para sumar: ");
                scanf("%lf %lf", &num1, &num2); // Almacena los numeros
                resultado = num1 + num2; // Suma operacion
                printf("Resultado de la suma: %.2lf\n", resultado);
                break;
                
            case 'b':            	
            //Division	
                printf("Ingrese dos numeros para dividir: ");
                scanf("%lf %lf", &num1, &num2); // Almacena los numeros
                if (num2 != 0) { // Si el numero que ingresó es diferente a 0
                //Se realiza la operación
                    resultado = num1 / num2;
                    printf("Resultado de la division: %.2lf \n", resultado); 
                } else {
                // Error
                    printf("No se puede dividir entre cero.\n");
                }
                break;
                
            case 'c':
            //Modulo	
                printf("Ingrese dos numeros para calcular el modulo: ");
                scanf("%lf %lf", &num1, &num2); // Almacena los numeros
                resultado = fmod(num1, num2); // operacion de modulo con funcion fmod
                printf("Resultado del modulo: %.2lf \n", resultado);
                break;
                
            case 'd':
            //Salir del programa
                printf("Saliendo del programa.\n");
                break;
                
            default:
            //Si insertó un dígito distinto al solicitado
                printf("Opcion invalida. Intente nuevamente.\n");
        }
    }
	while (opcion != 'd'); // hacer mientras la opcion no sea d
       
    return 0;
}
