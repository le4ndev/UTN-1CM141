#include <iomanip>
#include <iostream>
using namespace std;
//
// Created by le4ndev on 4/2/2025.
//

/*
 * Un comercio vende tres marcas de alfajores distintas A, B y C.
 * Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos
 * de cada una de las tres marcas y luego informar el porcentaje de ventas para cada una de ellas.
*/
int main() {
    int AlfajorA, AlfajorB, AlfajorC;

    cout << "Ingrese la cantidad de alfajores A:";
    cin >> AlfajorA;

    cout << "Ingrese la cantidad de alfajores B:";
    cin >> AlfajorB;

    cout << "Ingrese la cantidad de alfajores C:";
    cin >> AlfajorC;

    if (const int total = AlfajorA + AlfajorB + AlfajorC; total == 0) {
        cout << "No se han vendido alfajores." << endl;
    } else {
        const double porcentajeA = (static_cast<double>(AlfajorA) / total) * 100;
        const double porcentajeB = (static_cast<double>(AlfajorB) / total) * 100;
        const double porcentajeC = (static_cast<double>(AlfajorC) / total) * 100;

        cout << fixed << setprecision(2);
        cout << "Porcentaje de ventas:" << endl;
        cout << "A: " << porcentajeA << "%" << endl;
        cout << "B: " << porcentajeB << "%" << endl;
        cout << "C: " << porcentajeC << "%" << endl;
    }

    return 0;
}