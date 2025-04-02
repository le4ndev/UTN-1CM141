#include <iostream>
using namespace std;
//
// Created by le4ndev on 4/2/2025.
//

/*
 * Hacer un programa para un cajero automático para ingresar un importe
 * a retirar y convertir el mismo en la cantidad
 * de billetes de $1.000, $500, $200 y $100 a entregar.
*/
int main() {
    int monto, mil, quinientos, doscientos, cien;

    cout << "Ingrese el monto a retirar:";
    cin >> monto;

    if (monto <= 0) {
        cout << "El monto ingresado no es válido. Debe ser mayor a 0." << endl;
        return 1;
    }

    if (monto % 100 != 0) {
        cout << "El monto debe ser múltiplo de 100." << endl;
        return 1;
    }

    mil = monto / 1000;
    monto %= 1000;

    quinientos = monto / 500;
    monto %= 500;

    doscientos = monto / 200;
    monto %= 200;

    cien = monto / 100;

    cout << "Billetes a entregar:\n";
    cout << "$1000: " << mil << " billete(s)\n";
    cout << "$500: " << quinientos << " billete(s)\n";
    cout << "$200: " << doscientos << " billete(s)\n";
    cout << "$100: " << cien << " billete(s)\n";

    return 0;
}
