#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
	//Declaraciones de variables
    int numCalif = 10;
    float calif[numCalif];
    float suma = 0;
    float promedio;
    
    printf("ingresa las 10 calificaciones \n");
    for (int i = 0; i < numCalif; ++i){
    	printf("Calificacion %d ", i+1);
    	scanf("%f", &calif[i]);
    	
    	suma += calif[i];    	
	}
	promedio = suma / 10.0;
    
    printf("El promedio es: %.2f\n", promedio);
       
    return 0;
}
