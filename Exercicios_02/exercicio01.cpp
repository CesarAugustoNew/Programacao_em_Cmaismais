/*1)	Faça um programa que peça um número ao usuário e informe se é Par ou Ímpar*/

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "O numero é Par";
    } else {
        cout << "O numero é Impar";
    }

}