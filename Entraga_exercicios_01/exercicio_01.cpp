//
// Created by vini on 8/15/24.
//

#include <iostream>
using namespace std;
void exercicio_01(){
    char genero;
    double altura, peso_ideal;

    cout << "Digite seu gênero (M - F): ";
    cin >> genero;
    cout << "Digite sua altura: ";
    cin >> altura;

    switch(genero){
        case 'M':
            peso_ideal = 72.7 * altura -58;
            break;
        case 'F':
            peso_ideal = 62.1 * altura -44.7;
		default:
		    peso_ideal = 0;
			break;
    }

    cout << "Seu peso idal é: " << peso_ideal << endl;
}