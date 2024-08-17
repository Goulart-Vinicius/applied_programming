//
// Created by vini on 8/15/24.
//

#include <iostream>
using namespace std;

int exemplo1() {
    double num_1, num_2;

    cout << "Digite um número: ";
    cin >> num_1;
    cout << "Digite outro número: ";
    cin >> num_2;

    if (num_1 > num_2) {
        cout << "O mair número é: " << num_1  << endl;
    } else if (num_2 > num_1){
        cout << "O maior número é: " << num_2 << endl;
    } else {
        cout << "Os  números são iguais!" << endl;
    }

    return 0;
}
