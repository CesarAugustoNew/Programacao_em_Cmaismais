#include <iostream>
#include <array>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    float totalSemana = 0, mediaVendas;
    float maiorVenda, menorVenda;

    array<string, 7> diaSemana = {"domingo", "segunda", "terca", "quarta", "quinta", "sexta", "sabado"};
    array<float, 7> vendas;

    
    for (int i = 0; i < 7; i++) {
        cout << "Digite o valor da venda de " << diaSemana[i] << ": ";
        cin >> vendas[i];

        totalSemana += vendas[i];
    }


    mediaVendas = totalSemana / 7;

    cout << fixed << setprecision(2);
    
    maiorVenda = vendas[0];
    menorVenda = vendas[0];

    int diaMaior = 0;
    int diaMenor = 0;

   
    for (int i = 1; i < 7; i++) {
        if (vendas[i] > maiorVenda) {
            maiorVenda = vendas[i];
            diaMaior = i;
        }

        if (vendas[i] < menorVenda) {
            menorVenda = vendas[i];
            diaMenor = i;
        }
    }


    cout << "\n*************************************************" << endl;
    cout << "Total da semana: " << totalSemana << endl;
    cout << "Media de vendas: " << mediaVendas << endl;
    cout << "Maior venda foi na " << diaSemana[diaMaior] << " com valor de " << maiorVenda << endl;
    cout << "Menor venda foi na " << diaSemana[diaMenor] << " com valor de " << menorVenda << endl;
    cout << "*************************************************" << endl;
}