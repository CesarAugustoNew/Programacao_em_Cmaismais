/*Faça um programa para converter Reais em Dólares informado pelo usuário: 
Escala: R$6,00   →   U$1,00 */

#include <iostream>

using namespace std;

int main() {
    float real, dolar;

    cout << "Digite o valor em reais para ser convertido para dolar: ";
    cin >> real;

    dolar = real / 6;

    cout << "Voce tera em dolares: " << dolar << endl;

    system("pause");
}