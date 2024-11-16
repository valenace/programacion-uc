#include <iostream>
using namespace std;

//Dias de la semana
int main() {
    int numero;
    printf("Ingrese un numero del 1 al 7: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("domingo");
            break;
        case 2:
            printf("lunes");
            break;
        case 3:
            printf("martes");
            break;
        case 4:
            printf("miercoles");
            break;
        case 5:
            printf("jueves");
            break;
        case 6:
            printf("viernes");
            break;
        case 7:
            printf("sabado");
            break;
        default:            
            printf("No hay dia asignado para el numero ingresado.");
            break;
    }

    return 0;
}
