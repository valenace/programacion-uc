#include <iostream>

main()
{
    // Tipos de datos
    printf("el tipo char tiene un tamano de %d ", sizeof(char));
    printf("unsigned short int tiene un tamano de %d bytes \n", sizeof(unsigned short int));
    printf("unsigned long int tiene un tamano de %d bytes \n", sizeof(unsigned long int));
    printf("float tiene un tamano de %d bytes \n", sizeof(float));
    printf("double tiene un tamano de %d bytes \n", sizeof(double));
    printf("long double tiene un tamano de %d bytes \n", sizeof(long double));

    // Operaciones arimétricas
    printf("La division de 10/4 es %d \n", 10/4) ;
    printf("El modulo de 10%4 es %d \n", 10%4);
    printf("La division de 10/4 es %f \n", 10.0/4);
}
