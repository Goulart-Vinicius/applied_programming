//
// Created by vini on 8/17/24.
//

#include <iostream>

using namespace std;

void exercicio_04() {
    double resistencia, corrente;

    cout << "Cálculo de tensão elétrica." << endl;

    cout << "Digite a resistencia: ";
    cin >> resistencia;
    cout << "Digite a corrente: ";
    cin >> corrente;

    cout << "A tensão elétrica é: " << resistencia * corrente << endl;

}