/*
8) Faça um programa de um caixa eletrônico que, a partir do valor
informado pelo usuário, informe a menor quantidade de cédulas.

Notas disponíveis:
200, 100, 50, 20, 10, 5, 2, 1
*/

#include <iostream>
using namespace std;

int main() {

    int valor;

    cout << "Digite o valor do saque: ";
    cin >> valor;

    int n200 = valor / 200;
    valor = valor % 200;

    int n100 = valor / 100;
    valor = valor % 100;

    int n50 = valor / 50;
    valor = valor % 50;

    int n20 = valor / 20;
    valor = valor % 20;

    int n10 = valor / 10;
    valor = valor % 10;

    int n5 = valor / 5;
    valor = valor % 5;

    int n2 = valor / 2;
    valor = valor % 2;

    int n1 = valor / 1;

    cout << "Cedulas de 200 reais: " << n200 << endl;
    cout << "Cedulas de 100 reais: " << n100 << endl;
    cout << "Cedulas de 50 reais: " << n50 << endl;
    cout << "Cedulas de 20 reais: " << n20 << endl;
    cout << "Cedulas de 10 reais: " << n10 << endl;
    cout << "Cedulas de 5 reais: " << n5 << endl;
    cout << "Cedulas de 2 reais: " << n2 << endl;
    cout << "Cedulas de 1 real: " << n1 << endl;

    return 0;
}