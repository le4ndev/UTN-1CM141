#include <iostream>
using namespace std;
//
// Created by le4ndev on 4/2/2025.
//

/*
 * El Laboratorio V&V hace frascos de píldoras para aprender a programar.
 * Cada frasco contiene 75 píldoras y cada píldora contiene
 * 45 mg de Betamol, 2 grs de Micilina y 7 mg de Ácido Sinítico.
 * Nos solicitan un programa donde se ingrese la cantidad de
 * frascos de un pedido y muestre la cantidad de miligramos de Betamol,
 * Micilina y de Ácido Sinítico que son necesarios para elaborarlos.
*/
int main() {
    int frascos;

    const int pildoras_por_frasco = 75;
    const double betamol_por_pildora = 45.0;
    const double micilina_por_pildora = 2000.0;
    const double acido_sinitico_por_pildora = 7.0;

    cout << "Ingrese la cantidad de frascos a producir:";
    cin >> frascos;

    double total_betamol = frascos * pildoras_por_frasco * betamol_por_pildora;
    double total_micilina = frascos * pildoras_por_frasco * micilina_por_pildora;
    double total_acido_sinitico = frascos * pildoras_por_frasco * acido_sinitico_por_pildora;

    cout << "Para " << frascos << " frascos se necesitan:" << endl;
    cout << "Betamol: " << total_betamol << " mg" << endl;
    cout << "Micilina: " << total_micilina / 1000 << " g" << endl;
    cout << "Acido Sinitico: " << total_acido_sinitico << " mg" << endl;

    return 0;
}