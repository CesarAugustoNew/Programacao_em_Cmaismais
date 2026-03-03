/*
6) Faça um programa no qual o usuário informe um ano 
e o sistema responda se o ano é bissexto ou não.

Regra:
- É bissexto se for divisível por 4
- Não é bissexto se for divisível por 100
- Exceto se for divisível por 400 (aí é bissexto)
*/

#include <iostream>
using namespace std;

int main() {
    int ano;

    cout << "Digite um ano: ";
    cin >> ano;

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        cout << "O ano " << ano << " é bissexto." << endl;
    } else {
        cout << "O ano " << ano << " não é bissexto." << endl;
    }

    return 0;
}