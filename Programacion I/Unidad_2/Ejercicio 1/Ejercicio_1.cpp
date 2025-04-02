#include <iostream>
using namespace std;
//
// Created by le4ndev on 4/2/2025.
//

/**
 * Hacer un programa para ingresar por teclado un número y luego
 * emitir por pantalla un cartel aclaratorio indicando
 * si el mismo es positivo, negativo o cero.
 * Importante: Verifique que el programa emita UN SOLO CARTEL.
*/
int main() {
    int numero;

    std::cout << "Ingrese un numero:";
    std::cin >> numero;

    if (numero > 0) {
        std::cout << "El numero " << numero << " es positivo.";
    } else if (numero < 0) {
        std::cout << "El numero " << numero << " es negativo.";
    } else {
        std::cout << "El numero " << numero << " es cero.";
    }

    std::cout << std::endl;

    return 0;
}