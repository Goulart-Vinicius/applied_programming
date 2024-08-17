#include <iostream>
#include "main.h"

using namespace std;

int main() {
    cout << "Hello, World!" << std::endl;

    bool close = false;
    do {
        short choice;
        cout << "Selecione o exercício (0 - Para sair): ";
        cin >> choice;

        switch (choice) {
            case 0:
                close = true;
                break;
            case 1:
                exercicio_01();
                break;
            case 2:
                exercicio_02();
                break;
            case 3:
                exercicio_03();
                break;
            case 5:
                exercicio_05();
                break;
            case 4:
                exercicio_04();
                break;
            case 6:
                exercicio_06();
                break;
            case 7:
                exercicio_07();
                break;
            default:
                break;
        }

        system("clear");
    } while (!close);

    return 0;
}
