#include <cstdio>
#include <iostream>

// Prototipos
float suma(float a, float b); //Prototipo suma
float resta(float a, float b); //Prototipo resta
float multiplicar(float a, float b); //Prototipo multiplicacion
float dividir(float a, float b); //Prototipo division

int main() {
    char opcion;
    float num1, num2;
    bool opcionValida = false;

    do {
        // Menú para realizar acciones
        printf("Calculadora\n");
        printf("a) Suma\n");
        printf("b) Resta\n");
        printf("c) Multiplicacion\n");
        printf("d) Division\n");
        printf("e) Salir\n");
        printf("Ingrese una opcion: ");
        scanf(" %c", &opcion); // Almacenar la opción ingresada
        
        // Validar el operador ingresado
	    switch (opcion) {
	        case 'a':
	        case 'b':
	        case 'c':
	        case 'd':
	        
	            opcionValida = true;
	            break;
	            case 'e':
            printf("Salida del programa\n");
            break;
	        default:
	            printf("Opcion invalida. Use a, b, c, d o e.\n");
	    }
	    
		//Si la opcion es valida
		if(opcionValida) {
			//Ingrese los numeros
	        printf("Ingrese el primer número: ");
	        scanf("%f", &num1);
	
	        printf("Ingrese el segundo número: ");
	        scanf("%f", &num2);
	
	        switch (opcion) {
	            case 'a': //Suma
	                printf("Resultado: %.2f\n", suma(num1, num2));
	                printf("----------------\n");
	                break;
	            case 'b': //Resta
	                printf("Resultado: %.2f\n", resta(num1, num2));
	                printf("----------------\n");
	                break;
	            case 'c': //Multiplicacion
	                printf("Resultado: %.2f\n", multiplicar(num1, num2));
	                printf("----------------\n");
	                break;
	            case 'd': //Division
	                printf("Resultado: %.2f\n", dividir(num1, num2));
	                printf("----------------\n");
	                break;
	            case 'e':
	            printf("Salida del programa \n");   
	            break;
	        }
	    }else{
	    //Si la opcion es invalida	
	    system("pause"); // pausar la ejecución del programa hasta que presione una tecla
		system("cls");
		}
    } while (opcion != 'e'); // Hacer mientras la opción no sea letra 'e'
		system("pause"); // pausar la ejecución del programa hasta que presione una tecla
		system("cls"); 
    return 0;
}

//Funciones

//Funcion de suma
float suma(float a, float b) {
	float sum;
	sum = a + b;
    return sum;
}

// Funcion de resta
float resta(float a, float b) {
	float rest;
    rest = a - b;
	return rest;
}

//Funcion multiplicacion
float multiplicar(float a, float b) {
	float mult;
    mult = a * b;
	return mult;
}

//Funcion division
float dividir(float a, float b) {
    if (b != 0) {
    	float divi;
    	divi = a / b;
        return divi;
    } else {
        printf("no se puede dividir entre cero.\n");
        return 0;
    }
}

