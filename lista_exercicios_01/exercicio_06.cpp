//
// Created by vini on 8/17/24.
//
/*
6 - Faça um Programa que peça 2 números inteiros e um número real. Calcule
e mostre:
    a. O produto do dobro do primeiro com metade do segundo.
    b. A soma do triplo do primeiro com o terceiro.
    c. O terceiro elevado ao cubo
*/
#include <iostream>
#include <cmath>

using namespace std;

void exercicio_06() {
    int num_1, num_2;
    double num_3;

    cout << "Cálculos diversos." << endl;

    cout << "Digite um número interio: ";
    cin >> num_1;
    cout << "Digite outro número inteiro: ";
    cin >> num_2;
    cout << "Digite um número real: ";
    cin >> num_3;

    cout << "O dobro do primeiro com a metade do segundo: " << (num_1 * 2) * (num_2 / 2.0) << endl;
    cout << "A soma do triplo do primeiro com o terceiro: " << (num_1 * 3) + num_3 << endl;
    cout << "O terceiro elevado ao cubo:  " << pow(num_3,3) << endl;
}