#include <cstdio> // Incluimos la librería para printf y scanf
#include <string.h>


int main() {
	
	// Definición de la estructura Migracion

    struct Mig {
	    char nacionalidad[20];
	    int edad;
	    float peso;
	}migrante2,migrante1 = {"Venezolano", 23, 62.5};

    // Ingreso de datos para migrante2
    printf("Ingrese la nacionalidad: ");
    scanf(" %s", &migrante2.nacionalidad); // Nota: agregamos un espacio antes de %c para evitar problemas con el buffer
    printf("Ingrese la edad: ");
    scanf("%d", &migrante2.edad);
    printf("Ingrese el peso: ");
    scanf("%f", &migrante2.peso);
    
	printf("1ero migrante tiene nacionalidad %s tiene %d anos y pesa %f \n", migrante1.nacionalidad, migrante1.edad, migrante1.peso);
	printf("2do migrante tiene nacionalidad %s tiene %d anos y pesa %f \n", migrante2.nacionalidad, migrante2.edad, migrante2.peso);
	
	// Comparación de las nacionalidades
	if (!strcmp(migrante1.nacionalidad, migrante2.nacionalidad)) {
        printf("Las nacionalidades son iguales.\n");
    } else {
        printf("La primera nacionalidad es mayor que la segunda.\n");
    }
    
    // Comparación de las edades
    if (migrante1.edad > migrante2.edad) {
        printf("La edad del primer migrante es mayor que la edad del segundo.\n");
    } else if (migrante1.edad < migrante2.edad) {
        printf("La edad del primer migrante es menor que La edad del segundo.\n");
    } else {
        printf("Los migrantes tienen la misma edad.\n");
    }
    
    // Comparación de pesos
    if (migrante1.peso > migrante2.peso) {
        printf("El peso del primer migrante es mayor que el peso del segundo.\n");
    } else if (migrante1.peso < migrante2.peso) {
        printf("El pesodel primer migrante es menor que el peso del segundo.\n");
    } else {
        printf("Los migrantes tienen el mismo peso.\n");
    }

    return 0;
}

