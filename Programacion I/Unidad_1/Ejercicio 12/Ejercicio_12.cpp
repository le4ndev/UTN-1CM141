#include <iostream>
using namespace std;
//
// Created by le4ndev on 4/2/2025.
//

/*
 * Una granja vende la caja de 12 unidades a $1000 y cada huevo suelto a $120.
 * Hacer un programa para ingresar la cantidad de huevos que compra un cliente
 * y mostrar por pantalla el importe total a pagar.
*/
int main() {
    int cantidadHuevos;

    const int PRECIO_CAJA = 1000;
    const int PRECIO_HUEVO = 120;
    const int HUEVOS_POR_CAJA = 12;

    cout << "Ingrese la cantidad de huevos a comprar: ";
    cin >> cantidadHuevos;

    int cajas = cantidadHuevos / HUEVOS_POR_CAJA;
    int huevosSueltos = cantidadHuevos % HUEVOS_POR_CAJA;

    int total = (cajas * PRECIO_CAJA) + (huevosSueltos * PRECIO_HUEVO);

    cout << "Total a pagar: $" << total << endl;

    return 0;
}

