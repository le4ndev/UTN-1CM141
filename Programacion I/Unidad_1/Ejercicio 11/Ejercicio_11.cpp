#include <iostream>
using namespace std;
//
// Created by le4ndev on 4/2/2025.
//

/*
 * Hacer un programa para ingresar por teclado una cantidad de minutos
 * y mostrar por pantalla a cuántos días, horas y minutos equivalen.
*/
int main() {
    int minutos;

    cout << "Ingrese la cantidad de minutos: ";
    cin >> minutos;

    int dias = minutos / 1440;
    int horas = (minutos % 1440) / 60;
    int minutos_restantes = minutos % 60;

    cout << "Equivale a: " << dias << " dia(s), " << horas << " hora(s) y " << minutos_restantes << " minuto(s)." << endl;

    return 0;
}
