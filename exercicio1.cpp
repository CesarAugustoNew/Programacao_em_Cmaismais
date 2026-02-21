/*Monte um programa que exiba a soma de dois números inteiros. */

#include <iostream>

using namespace std;

int main() {
    int num1, num2, soma;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    soma = num1 + num2;

    cout << "A soma e: " << soma << endl;

    system("pause");

}