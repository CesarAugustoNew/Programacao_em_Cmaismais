/*Uma empresa de transporte público quer fazer um sistema automático para identificar se o usuário terá gratuidade no transporte ou não. Faça um pograma que pergunte a idade do usuário, se ele tiver 65 anos ou mais irá informar que ele tem gratuidade no transporte*/

#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade >= 65) {
        cout << "Voce tem gratuidade no transporte.";
    } else {
        cout << "Voce nao tem gratuidade no transporte.";
    }

}