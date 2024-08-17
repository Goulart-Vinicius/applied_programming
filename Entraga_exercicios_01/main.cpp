#include <iostream>
#include "exercicio_01.h"
#include "exercicio_02.h"
#include "exercicio_03.h"
#include "exercicio_04.h"

using namespace std;

int main()
{
    cout << "Hello, World!" << std::endl;

    bool close = false;
    while (!close) {
        short choice;
        cout << "Selecione o exercício: (0 - Para sair)" ;
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
            case 4:
                exercicio_04();
            default:
                break;
        }

        system("clear");
    }

    return 0;
}
