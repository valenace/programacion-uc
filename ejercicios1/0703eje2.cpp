#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
	//Declaraciones de variables
	int i;
	int j;
    double matriz[2][2];
    double deter;
    
    printf("Introduce los numeros de la matriz 2x2: \n");
    
    for (i = 0; i < 2; i++){
    	for (j = 0; j < 2; j++){
    		scanf("%lf", &matriz[i][j]);
		}
	}
	printf("\n matriz:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%.2lf\t", matriz[i][j]);
        }
        printf("\n");
    }
	
	deter = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
	
	
	printf("El determinante es: %2lf\n", deter);
	
    
       
    return 0;
}
