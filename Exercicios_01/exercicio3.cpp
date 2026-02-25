/*Um professor gostaria um programa para auxiliá-lo a montar a média final de seus alunos. 
Sabendo que são 2 notas no ano, monte um programa que através das notas informadas 
pelo usuário mostre a sua média final. Não esqueça de manter uma boa interface com o 
usuário! */


#include <iostream>
using namespace std;

int main() {
    int nota1, nota2, media;

    cout << "Digite sua primeira nota: ";
    cin >> nota1;

    cout << "Digite sua segunda nota: ";
    cin >> nota2;

    media = (nota1 + nota2) / 2;

    cout << "Sua media sera de: " << media << endl;

    system("pause");


}