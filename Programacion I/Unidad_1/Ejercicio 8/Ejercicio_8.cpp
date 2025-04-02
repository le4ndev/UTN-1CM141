#include <iostream>
using namespace std;
//
// Created by le4ndev on 4/2/2025.
//

/*
 * Hacer un programa para ingresar por teclado el importe de una venta sin descuento
 * y el importe de esa misma venta con el descuento aplicado.
 * Luego informar por pantalla el porcentaje de descuento aplicado a la misma.
*/
int main() {
    double importeSinDescuento, importeConDescuento;

    cout << "Ingrese el importe de la venta sin descuento:";
    cin >> importeSinDescuento;

    cout << "Ingrese el importe de la venta con descuento:";
    cin >> importeConDescuento;

    if (importeSinDescuento > 0 && importeConDescuento >= 0 && importeConDescuento <= importeSinDescuento) {
        double porcentajeDescuento = ((importeSinDescuento - importeConDescuento) / importeSinDescuento) * 100;

        cout << "El porcentaje de descuento aplicado es: " << porcentajeDescuento << "%" << endl;
    } else {
        cout << "Los valores ingresados no son válidos." << endl;
    }

    return 0;
}
