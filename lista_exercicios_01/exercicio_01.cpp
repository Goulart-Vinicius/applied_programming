//
// Created by vini on 8/17/24.
//
// 1 – A nota de um estudante é calculada a partir de 3 notas atribuídas,
// respectivamente, a um trabalho (peso 2), a uma avaliação semestral (peso 3) e
// um exame final (peso 5). Efetue um programa que calcule a nota final do aluno.

#include <iostream>

using namespace std;

void exercicio_01() {
    double nota_01, nota_02, nota_03 = 0;
    cout << "Calculo de média: " << endl << "Nota número 1 (peso 2): ";
    cin >> nota_01;
    cout << "Nota número 2 (peso 3): ";
    cin >> nota_02;
    cout << "Nota número 3 (peso 5): ";
    cin >> nota_03;

    double media = ((nota_01 * 2) + (nota_02 * 3) + (nota_03 * 5)) / (2 + 3 + 5);

    cout << "A média final do aluno é: " << media << endl;
}
