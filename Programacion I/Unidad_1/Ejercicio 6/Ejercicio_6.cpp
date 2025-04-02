#include <iostream>
using namespace std;
//
// Created by le4ndev on 4/2/2025.
//

/*
 * Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos
 * para cada una de las cuatro semanas del mes.
 * El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
*/
int main() {
    double semanas[4], total = 0, promedio;

    for (int i = 0; i < 4; i++) {
        cout << "Ingrese la recaudacion de la semana " << (i + 1) << ":";
        cin >> semanas[i];
        total += semanas[i];
    }

    promedio = total / 4;

    cout << "Recaudacion promedio por semana:" << promedio << endl;
    cout << "Porcentaje de recaudacion por semana:" << endl;

    for (int i = 0; i < 4; i++) {
        cout << "Semana " << (i + 1) << ": " << (semanas[i] / total) * 100 << "%" << endl;
    }

    return 0;
}