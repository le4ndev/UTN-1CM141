#include <iostream>
using namespace std;
//
// Created by le4ndev on 4/2/2025.
//

/*
 * Hacer un programa para ingresar el importe de una compra y el descuento a aplicar.
 * Listar por pantalla, el importe sin descuento,
 * el descuento aplicado y el importe total a cobrar.
*/
int main() {
    double importe, descuentoPorcentaje, descuentoAplicado, total;

    cout << "Ingrese el importe de la compra:";
    cin >> importe;

    cout << "Ingrese el porcentaje de descuento:";
    cin >> descuentoPorcentaje;

    descuentoAplicado = (importe * descuentoPorcentaje) / 100;
    total = importe - descuentoAplicado;

    cout << "Importe: " << importe << ", Descuento: " << descuentoAplicado << ", Total: " << total << endl;

    return 0;
}