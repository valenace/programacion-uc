#include <cstdio>
/*
resolver operaci�n arim�trica seg�n el tipo de prioridad
4-6�3x5+2%5
*/
int main() {
    // primero se realiza la divisi�n: 6 � 3 = 2
    int paso1 = 6 / 3;
    printf("Paso 1: 6 / 3 = %d\n", paso1);

    // luego la multiplicaci�n: 2 (resultado del paso 1) x 5 = 10
    int paso2 = paso1 * 5;
    printf("Paso 2: %d x 5 = %d\n", paso1, paso2);

    // despu�s el m�dulo: 2 % 5 = 2
    int paso3 = 2 % 5;
    printf("Paso 3: 2 %% 5 = %d\n", paso3);

    // luego se realiza la resta: 4 - 10 (resultado del paso 2) = -6
    int paso4 = 4 - paso2;
    printf("Paso 4: 4 - %d = %d\n", paso2, paso4);

    // y se realiza la suma: -6 (resultado del paso 4) + 2 (resultado del paso 3) = -4
    int resultado = paso4 + paso3;
    printf("Resultado: %d + %d = %d\n", paso4, paso3, resultado);

    return 0;
}

