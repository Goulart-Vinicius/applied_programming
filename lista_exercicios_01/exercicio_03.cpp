//
// Created by vini on 8/17/24.
//
/*
    3 - Faça um programa que leia os valores de COMPRIMENTO, LARGURA e
    ALTURA e apresente o valor do volume de uma caixa retangular. Utilize para o
    cálculo a fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA.
*/
#include <iostream>

using namespace std;

void exercicio_03() {
    double comprimento, largura, altura;

    cout << "Cálculo de volume de uma caixa retângular." << endl;

    cout << "Digite um comprimento: ";
    cin >> comprimento;
    cout << "Digite a largura: ";
    cin >> largura;
    cout << "Digite a altura: ";
    cin >> altura;


    cout << "O volume é: " << comprimento * largura * altura;
}