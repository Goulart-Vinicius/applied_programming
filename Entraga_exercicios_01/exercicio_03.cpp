//
// Created by vini on 8/15/24.
//

#include <iostream>

using namespace std;

void exercicio_03() {
    int codigo;

    cout << "Digite o código do produto: ";
    cin >> codigo;

    switch (codigo) {
        case 1:
            cout << "Classificação: Alimento não-perecível" << endl;
        break;
        case 2:
        case 3:
        case 4:
            cout << "Classificação: Alimento perecível" << endl;
        break;
        case 5:
        case 6:
            cout << "Classificação: Vestuário" << endl;
        break;
        case 7:
            cout << "Classificação: Higiene Pessoal" << endl;
        break;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            cout << "Classificação: Limpeza e Utensílios Domésticos" << endl;
        break;
        default:
            cout << "Classificação: Código inválido" << endl;
        break;
    }

}
