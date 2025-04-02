#include <iostream>
using namespace std;
//
// Created by le4ndev on 4/2/2025.
//

/*
 * La amplitud térmica es la diferencia entre la temperatura máxima y
 * la temperatura mínima en una zona y tiempo determinado.
 * Dada la temperatura máxima y la temperatura mínima de
 * San Fernando de ayer, calcular y mostrar la amplitud térmica
*/
int main() {
    double tempMax, tempMin, amplitudTermica;

    cout << "Ingrese la temperatura maxima de ayer en San Fernando:";
    cin >> tempMax;

    cout << "Ingrese la temperatura minima de ayer en San Fernando:";
    cin >> tempMin;

    if (tempMax >= tempMin) {
        amplitudTermica = tempMax - tempMin;
        cout << "La amplitud termica es: " << amplitudTermica << " grados." << endl;
    } else {
        cout << "Error: La temperatura maxima debe ser mayor o igual a la temperatura minima." << endl;
    }

    return 0;
}