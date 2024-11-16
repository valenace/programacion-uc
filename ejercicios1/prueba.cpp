#include<iostream>
#include<cmath> // Añade esta línea
using namespace std;

int main() {
    // Operación de división
    double div1 = 10.0 / 4.0;
    cout << "El resultado de 10/4 es: " << div1 << endl;

    // Operación de módulo
    int mod1 = 20 % 3;
    cout << "El resultado de 20%3 es: " << mod1 << endl;

    // Otra operación de módulo
    int mod2 = 5 % 7;
    cout << "El resultado de 5%7 es: " << mod2 << endl;

    // Operación de potencia
    double powResult = pow(4.0, 2.0); // Asegúrate de que los argumentos sean de tipo double
    cout << "El resultado de 4^2 es: " << powResult << endl;

    // Operación de división con decimales
    double div2 = 10.5 / 3.0;
    cout << "El resultado de 10.5/3.0 es: " << div2 << endl;

    // Otra operación de módulo
    int mod3 = 10 % 3;
    cout << "El resultado de 10%3 es: " << mod3 << endl;

    // Operación de división donde el numerador y el denominador son iguales
    double div3 = 30.0 / 30.0;
    cout << "El resultado de 30/30 es: " << div3 << endl;

    return 0;
}

