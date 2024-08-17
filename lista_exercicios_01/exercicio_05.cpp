//
// Created by vini on 8/17/24.
//

#include <iostream>

using namespace std;

void exercicio_05() {
    short ano;

    cout << "Veríficação de ano bissexto." << endl;

    cout << "Digite um ano: ";
    cin >> ano;

    if (ano % 4 == 0) {
        cout << "Este ano é bissexto." << endl;
    } else {
        cout << "Este ano não é bissexto." << endl;
    }
}