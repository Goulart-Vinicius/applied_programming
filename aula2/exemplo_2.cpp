//
// Created by vini on 8/15/24.
//

#include <iostream>



void exemplo2() {
    int dia;
    std::cout << "Digite um número (0-6) para descobrir o dia da semana: ";
    std::cin >> dia;
    switch (dia) {
        case 0:
            std::cout << "Domigo" << std::endl;
            break;
        case 1:
            std::cout << "Segunda" << std::endl;
            break;
        case 2:
            std::cout << "Terça" << std::endl;
            break;
        case 3:
            std::cout << "Quarta" << std::endl;
            break;
        case 4:
            std::cout << "Quinta" << std::endl;
            break;
        case 5:
            std::cout << "Sexta" << std::endl;
            break;
        case 6:
            std::cout << "Sabado" << std::endl;
            break;
        default:
            std::cout << "Número inválido! Por favor insira um numero entre 0 e 6." << std::endl;
    }

}
