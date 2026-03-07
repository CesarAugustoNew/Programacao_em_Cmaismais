#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 4> valores; // Cria array com 4 itens (índices de 0 a 3)

    array<int, 4> valores = {10, 8, 5, 7}; // Cria array com valores definidos

    [2] = 11; // Altera índice [2] de 5 para 11

    cout << valores[0] << endl; // Mostra valor do índice [0] --> 10

    int tamanho = valores.size(); // Número de elementos do array

    // Permite range-based for para acessar itens diretamente
    for (int valor : valores) {
    cout << valor << endl;
    }
}
