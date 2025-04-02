#include <iostream>
using namespace std;
//
// Created by le4ndev on 4/2/2025.
//

/*
 * Hacer un programa que solicite por teclado que se ingresen dos números
 * y luego guardarlos en dos variables distintas.
 * A continuación, se deben intercambiar mutuamente los valores en ambas variables
 * y mostrarlos por pantalla.
*/
int main() {
    int A, B;

    cout << "Ingrese el primer valor:";
    cin >> A;

    cout << "Ingrese el segundo valor:";
    cin >> B;

    cout << "Los Valores actuales son: A = " << A << " y B = " << B << endl;

    const int valorTemporal = A;

    A = B;
    B = valorTemporal;

    cout << "Los Nuevos valores son: A = " << A << " y B = " << B << endl;

    return 0;
}