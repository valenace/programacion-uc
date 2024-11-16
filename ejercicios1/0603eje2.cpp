#include <iostream>
using namespace std;

//Boletin de calificaciones
int main() {
    int calificacion;
    printf("Ingrese una calificacion (0-10): ");
    scanf("%d", &calificacion);

    switch (calificacion) {
		//0 a 6: “Reprobado, esfuérzate más.”
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:            
            printf("Reprobado, esfuerzate mas.");
            break;
        case 7:
        	//7: “Suficiente, aprobado.”
            printf("Suficiente, aprobado.");
            break;
        case 8:
        	//8: “Bien, aprobado.”
            printf("Bien, aprobado.");
            break;
        case 9:
        	//9: “Notable, aprobado.”
            printf("Notable, aprobado.");
            break;
        case 10:
        	//10: “Sobresaliente, aprobado.”
            printf("Sobresaliente, aprobado.");
            break;
        default:
        	//En caso contrario, la nota no está dentro del intervalo.
            printf("la nota no esta dentro del intervalo (0-10).");
            break;
    }
    

    return 0;
}
