/*
===============================================================
Programa: Advinhe um número
Autor: Cesar
Data: 02/03/2026
Descrição: Jogo de advinhação de um número de 1 a 10000
           contra o PC.
===============================================================
*/

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Passo 1: Gerar um número aleatório de 1 a 10000
    srand(time(0));

    short numeroSecreto = rand() % 10000 + 1;
    bool ganhei = false;

    for (short tentativas = 0; tentativas < 10; tentativas++) {
        cout << "Tentativa " << tentativas + 1 << endl;
        // Passo 2: Pedir número ao usuário
        short numeroJogador;
        cout << "Escolha um número de 1 a 10000: ";
        cin >> numeroJogador;

        // Passo 3: Comparar resultados e dar dica se errado
        if (numeroJogador > numeroSecreto) {
            cout << "Tente um número menor\n";
        }
        else if (numeroJogador < numeroSecreto) {
            cout << "Tente um número maior\n";
        }
        else {
            ganhei = true;
            cout << "Você acertou o número!\n";
            break;
        }

        // Passo 4: Tornar o programa repetitivo (10x)
    }

    if (!ganhei) {
        cout << "O número era " << numeroSecreto << endl;
    }

    system("pause");
}