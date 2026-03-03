/* 
3) Faça um programa que pede duas notas de um aluno. 
Em seguida ele deve calcular a média do aluno e dar o seguinte resultado:
- Aprovado -> Acima de 7
- Reprovado -> Abaixo de 5
- Recuperacao -> Entre 5 e 7
*/

#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, media;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    media = (nota1 + nota2) / 2;

    cout << "Media: " << media << endl;

    if (media > 7) {
        cout << "Aprovado";
    } 
    else if (media < 5) {
        cout << "Reprovado";
    } 
    else {
        cout << "Recuperacao";
    }

}