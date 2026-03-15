/*
===============================================================
Programa: Lançamento de Dados
Autor: Cesar
Data: 15/03/2026
Descrição: Lançamento de n Dados.
===============================================================
*/

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    vector<int> resultados;

    int numDados, numLancamentos;
    cout << "Quantos dados você quer jogar simultaneamente? ";
    cin >> numDados;
    short numResultados = numDados * 5 + 1;
    resultados.assign(numResultados, 0);

    
    cout << "Quantas vezes deseja jogar esses dados? ";
    cin >> numLancamentos;
    
    srand(time(0));

    for (int i = 0; i < numLancamentos; ++i) {
        int soma = 0;
        for (int j = 0; j < numDados; ++j) {
            soma += rand() % 6 + 1;
        }
        resultados[soma-numDados]++;
    }

    for (int i = 0; i < numResultados; ++i) {
        cout << i + numDados << ": " << resultados[i] << endl;
    }
    system("pause");
}