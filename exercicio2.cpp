/* Faça um programa que mostre em que ano a pessoa terá 80 anos a partir da idade 
informada pelo usuário. Não esqueça de manter uma boa interface com o usuário */

#include <iostream>

using namespace std;

int main() {

    int idade, anoAtual, ano80;

    cout << "Digite sua idade atual: ";
    cin >> idade;

    cout << "Digite o ano atual: ";
    cin >> anoAtual;

    ano80 = anoAtual + (80 - idade);

    cout << "Voce fara 80 anos no ano de: " << ano80 << endl;

    system("pause");

}