#include <cstdio>

int main() {
    int numTrabajadores;
    double salarioNeto, salarioNetoTotal = 0;

    printf("Ingrese la cantidad de trabajadores: ");
    scanf("%d", &numTrabajadores);

    for (int i = 1; i <= numTrabajadores; ++i) {
        printf("Salario bruto para el trabajador %d: ", i);
        scanf("%lf", &salarioNeto);

        salarioNetoTotal += salarioNeto; // Sumamos al total
    }

    printf("Nómina total de la empresa: $%.2lf\n", salarioNetoTotal);

    return 0;
}
