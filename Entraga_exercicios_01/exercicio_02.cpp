//
// Created by vini on 8/15/24.
//

#include <iostream>

using namespace std;

void exercicio_02() {
    double salarioAtual, percentualAumento,  novoSalario;

    cout << "Digite o salário atual do colaborador: R$ ";
    cin >> salarioAtual;

    if (salarioAtual <= 280.00) {
        percentualAumento = 20.0;
    } else if (salarioAtual <= 700.00) {
        percentualAumento = 15.0;
    } else if (salarioAtual <= 1500.00) {
        percentualAumento = 10.0;
    } else {
        percentualAumento = 5.0;
    }

    novoSalario = salarioAtual +  (salarioAtual * percentualAumento / 100.0);

    cout << "Novo salário, após o aumento: R$ " << novoSalario << endl;

}
