#include <iostream>



int main()
{
	
	//Primer ejercicio
	/*
	int num1 = 5;
    int num2 = 7;
    int respuestaUsuario;

    std::cout << "�Cu�nto es " << num1 << " + " << num2 << "?\n";
    std::cin >> respuestaUsuario;

    if (respuestaUsuario == num1 + num2) {
        printf("�Felicitaciones! Tu respuesta es correcta.\n");
    } else {
        printf("Lo siento, tu respuesta es incorrecta. �Vuelve a primer grado!\n");
    }
	*/
	
	?*
	//Declaraci�n de variable de angulo para almacenar
	int angulo;
    
    //pide al usuario que introduzca un valor de �ngulo entre 0 y 360.
    printf("Introduce el valor del �ngulo (entre 0 y 360): ");
    
    //guarda dato introducido
  	scanf("%d", &angulo);
  	
	//Ahora determine que tipo de angulo es segundo el numero introducido
	
	if(angulo == 0) { //si el �ngulo es 0
        printf("El �ngulo es cero", angulo);
    }
    if(angulo > 0 && angulo < 90) { //si el �ngulo es agudo (mayor que 0 y menor que 90)
        printf("El �ngulo %d es agudo.", angulo);
    }
	if(angulo == 90) { //recto (igual a 90)
        printf("El �ngulo %d es recto.", angulo);
    }
	 if(angulo > 90 && angulo < 180) { // obtuso (mayor que 90 y menor que 180)
        printf("El �ngulo %d es obtuso.", angulo);
    } 
	if(angulo == 180) { // llano (igual a 180)
        printf("El �ngulo %d es llano.", angulo);
    }
	if(angulo > 180 && angulo < 360){ //c�ncavo (mayor que 180 y menor que 360)
        printf("El �ngulo %d es c�ncavo.", angulo);
    }
    
    /
}
