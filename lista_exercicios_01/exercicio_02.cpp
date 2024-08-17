//
// Created by vini on 8/17/24.
//

// 2- Faça um programa para calcular a área de uma circunferência, considerando
// a fórmula ÁREA = π * RAIO2. Utilize as variáveis AREA e RAIO, a constante π
// (pi = 3,14159) e os operadores aritméticos de multiplicação.

#include <iostream>
#include <iomanip>

using namespace std;

void exercicio_02() {
    const double PI = 3.14159;
    double area, raio;

    cout << "Cálculo de área de um círculo." << endl;
    cout << "Digite o raio da circunferência: ";
    cin >> raio;

    area = PI * (raio * raio);

    cout << "A área da circunferência é: " << fixed << setprecision(2) << area << endl;
}
