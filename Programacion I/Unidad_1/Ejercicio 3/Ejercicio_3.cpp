#include <iostream>
using namespace std;
//
// Created by le4ndev on 4/2/2025.
//

/*
 * Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000
 * más $700 de premio por cada auto vendido.
 * Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos
 * por un vendedor y luego informar por pantalla el sueldo total a pagar.
*/
int main() {
    int sueldoFijo = 5000, premio = 700, autosVendidos;

    cout << "Ingrese la cantidad de autos vendidos:";
    cin >> autosVendidos;

    cout << "El sueldo total del trabajador es: $" << sueldoFijo + (premio * autosVendidos) << endl;

    return 0;
}
