#include <iostream>

using namespace std;

int main() {

    char gabarito[5];
    char respostas[5];
    int acertos = 0;
    float porcentagem;

    // Ler o gabarito
    cout << "Digite o gabarito da prova (A, B, C ou D):\n";
    for (int i = 0; i < 5; i++) {
        cout << "Questao " << i + 1 << ": ";
        cin >> gabarito[i];
    }

    cout << endl;

    // Ler respostas do aluno
    cout << "Digite as respostas do aluno:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Questao " << i + 1 << ": ";
        cin >> respostas[i];
    }

    cout << endl;

    // Corrigir prova
    for (int i = 0; i < 5; i++) {
        if (respostas[i] == gabarito[i]) {
            acertos++;
        }
    }

    // Calcular porcentagem
    porcentagem = (acertos / 5.0) * 100;

    // Mostrar resultado
    cout << "Total de acertos: " << acertos << endl;
    cout << "Porcentagem de acertos: " << porcentagem << "%" << endl;

    cout << "\nQuestoes erradas:\n";

    // Mostrar erros
    for (int i = 0; i < 5; i++) {
        if (respostas[i] != gabarito[i]) {
            cout << "Questao " << i + 1
                 << " - Resposta do aluno: " << respostas[i]
                 << " | Correta: " << gabarito[i] << endl;
        }
    }

    return 0;
}