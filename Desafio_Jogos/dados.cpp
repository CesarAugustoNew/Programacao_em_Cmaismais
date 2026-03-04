/*
===============================================================
Programa: Jogar 2 Dados
Autor: Cesar Augusto
Data: 03/03/2026
Descrição: Jogar 2 dados repetidamente pelo número de vezes
           definido pelo usuário.
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

    int resultado2 = 0;
    int resultado3 = 0;
    int resultado4 = 0;
    int resultado5 = 0;
    int resultado6 = 0;
    int resultado7 = 0;
    int resultado8 = 0;
    int resultado9 = 0;
    int resultado10 = 0;
    int resultado11 = 0;
    int resultado12 = 0;

    unsigned long jogadas;
    cout << "Quantas vezes você quer jogar 2 dados: ";
    cin >> jogadas;

    for (unsigned long i = 0; i < jogadas; ++i) {
        short dado1 = rand() % 6 + 1;
        short dado2 = rand() % 6 + 1;
        short soma = dado1 + dado2;

        if (soma == 2) ++resultado2;
        else if (soma == 3) ++resultado3;
        else if (soma == 4) ++resultado4;
        else if (soma == 5) ++resultado5;
        else if (soma == 6) ++resultado6;
        else if (soma == 7) ++resultado7;
        else if (soma == 8) ++resultado8;
        else if (soma == 9) ++resultado9;
        else if (soma == 10) ++resultado10;
        else if (soma == 11) ++resultado11;
        else if (soma == 12) ++resultado12;
    }

    cout << "Número 2: " << resultado2 << endl;
    cout << "Número 3: " << resultado3 << endl;
    cout << "Número 4: " << resultado4 << endl;
    cout << "Número 5: " << resultado5 << endl;
    cout << "Número 6: " << resultado6 << endl;
    cout << "Número 7: " << resultado7 << endl;
    cout << "Número 8: " << resultado8 << endl;
    cout << "Número 9: " << resultado9 << endl;
    cout << "Número 10: " << resultado10 << endl;
    cout << "Número 11: " << resultado11 << endl;
    cout << "Número 12: " << resultado12 << endl;

    system("pause");
}