#include <iostream>
using namespace std;
//
// Created by le4ndev on 4/2/2025.
//

/*
 * Hacer un programa para ingresar por teclado una cantidad de minutos
 * y mostrar por pantalla a cuántas horas y minutos equivalen.
*/
int main() {
    int minutos;

    cout << "Ingrese el tiempo en minutos:";
    cin >> minutos;

    cout << "El tiempo total es de: " << minutos / 60 << " horas y " << minutos % 60 << " minutos." << endl;

    return 0;
}