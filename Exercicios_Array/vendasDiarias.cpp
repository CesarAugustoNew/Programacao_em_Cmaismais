/*
===============================================================
Programa: Análise de Vendas
Autor: Daniel
Data: 08/04/2025
Descrição: Análise de Vendas por dia da semana.
===============================================================
*/

#include <iostream>
#include <string>
#include <array>
#include <windows.h>
#include <algorithm>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    // Passo 1: Criar array de dias e de vendas
    array<string, 7> dias = {
        "Domingo",
        "Segunda-Feira",
        "Terça-Feira",
        "Quarta-Feira",
        "Quinta-Feira",
        "Sexta-Feira",
        "Sábado"
    };
    
    array<int, 7> vendas = {0};
    
    //Passo 2: Pedir as vendas de cada dia
    //Passo 3: Calcular o total da semana
    int soma=0;
    for (short i=0; i<vendas.size(); i++) {
        cout << "Digite a venda de " << dias[i] << ": ";
        cin >> vendas[i];
        soma += vendas[i];
    }
    
    //Passo 4: Calcular a média da semana
    float media = soma / vendas.size();
    
    //Passo 5: Calcular o dia com maior e menor vendas
    int valorMaiorVenda = -1;
    string diaMaiorVenda = "";
    int valorMenorVenda = -1;
    string diaMenorVenda = "";
    
    for (short i=0; i<vendas.size(); i++) {
        if (vendas[i] > valorMaiorVenda) {
            valorMaiorVenda = vendas[i];
            diaMaiorVenda = dias[i];
        }
        if (vendas[i] < valorMenorVenda || valorMenorVenda == -1) {
            valorMenorVenda = vendas[i];
            diaMenorVenda = dias[i];
        }
    }
    
    int valorMaiorVenda2 = *max_element(begin(vendas), end(vendas));
    
    string diaMaiorVenda2;
    for (short i=0; i<vendas.size(); i++) {
        if (vendas[i] == valorMaiorVenda) {
            diaMaiorVenda2 = dias[i];
            break;
        }
    }
    
    //Passo 6: Informar ao usuário
    cout << fixed << setprecision(2);
    cout << "Vendas da Semana:" << endl;
    for (short i=0; i<vendas.size(); i++) {
        cout << dias[i] << ": " << vendas[i] << endl;
    }
    
    cout << "Total de Vendas:" << soma << endl;
    cout << "Média de Vendas: " << media << endl;
    cout << "Dia com maior quantidade de Vendas: " << diaMaiorVenda << "(" << valorMaiorVenda << ")" << endl;
    cout << "Dia com menor quantidade de Vendas: " << diaMenorVenda << "(" << valorMenorVenda << ")" << endl;
    
    cout << "Dia com maior quantidade de Vendas2: " << diaMaiorVenda2 << "(" << valorMaiorVenda2 << ")" << endl;

    system("pause");
}
