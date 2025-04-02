#include <iostream>
using namespace std;
//
// Created by le4ndev on 4/2/2025.
//

/*
 * Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión
 * y la cantidad de pasajes ocupados.
 * Luego, calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.
*/
int main() {
    int asientosTotales, asientosOcupados;

    cout << "Ingrese el numero de asientos:";
    cin >> asientosTotales;

    cout << "Ingrese el numero de asientos ocupados:";
    cin >> asientosOcupados;

    cout << "El porcentaje de asientos ocupados es: " << (asientosOcupados * 100) / asientosTotales << "%" << endl;
    cout << "El porcentaje de asientos libres es: " << (asientosTotales - asientosOcupados) * 100 / asientosTotales << "%" << endl;

    return 0;
}
