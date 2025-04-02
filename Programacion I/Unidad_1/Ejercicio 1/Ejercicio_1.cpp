#include <iostream>
//
// Created by le4ndev on 4/2/2025.
//

/*
 * Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
 * por un operario y el valor que se le paga por hora trabajada
 * y listar por pantalla el sueldo que le corresponda.
*/
int main() {
    double horasTrabajadas, valorPorHora;

    cout << "Ingrese horas trabajadas:";
    cin >> horasTrabajadas;

    cout << "Ingrese valor por hora:";
    cin >> valorPorHora;

    const double sueldo = horasTrabajadas * valorPorHora;

    cout << "El sueldo correspondiente es: $" << sueldo << endl;

    return 0;
}
