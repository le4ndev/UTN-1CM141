#include <iostream>
using namespace std;
//
// Created by le4ndev on 4/2/2025.
//

/*
 * Hacer un programa para ingresar por teclado el importe de una venta
 * y el porcentaje de descuento aplicada a la misma.
 * Luego informar por pantalla el importe a pagar.
*/
int main() {
    double valorDeLaVenta;
    double porcentajeDeDescuento;

    cout << "Ingrese el valor de la venta:";
    cin >> valorDeLaVenta;

    cout << "Ingrese el porcentaje de descuento:";
    cin >> porcentajeDeDescuento;

    cout << "Importe a pagar: " << valorDeLaVenta - (valorDeLaVenta * porcentajeDeDescuento / 100) << endl;

    return 0;
}
