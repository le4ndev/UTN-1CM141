#include <iostream>
using namespace std;
//
// Created by le4ndev on 4/2/2025.
//

/*
 * Hacer un programa para ingresar por teclado una cantidad de horas
 * y mostrar por pantalla a cuántos días y horas equivalen.
*/
int main() {
    int horas;

    cout << "Ingrese la cantidad de horas:";
    cin >> horas;

    int dias = horas / 24;
    int horas_restantes = horas % 24;

    cout << "Equivale a: " << dias << " dia(s) y " << horas_restantes << " hora(s)." << endl;

    return 0;
}
