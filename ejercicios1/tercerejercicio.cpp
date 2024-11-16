#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminante, raiz1, raiz2; // declaracion de variables

    printf("introduce los coeficientes a, b y c: "); //usuario introduce 3 numeros dando enter a cada uno
    scanf("%lf %lf %lf", &a, &b, &c); //guarda numeros

    discriminante = pow(b,2) - 4*a*c; //formula de discriminante

    if (discriminante >= 0) { //si la discriminante da mayor oigual a 0
        raiz1 = (-b + sqrt(discriminante)) / (2*a); //operacion negativa
        raiz2 = (-b - sqrt(discriminante)) / (2*a); // operacion positiva
        printf("las raíces reales son %.2lf y %.2lf.\n", raiz1, raiz2); //muestra resutado
    }
    else { //si la discriminante NO ES mayor o igual a 0
        printf("no hay soluciones reales.\n"); //muestra resutado
    }

    return 0;
}
