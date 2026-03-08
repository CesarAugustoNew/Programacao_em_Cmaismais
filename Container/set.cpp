#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> valores; // Cria um set vazio
    set<int> valores = {10, 8, 5, 7}; // Cria um set com valores

    valores.insert(4); // Adiciona mais um valor

    // Não é possível acessar por índice, mas podemos verificar existência
    if (valores.find(5) != valores.end()) {
        valores.erase(5); // Remove o valor 5
        valores.insert(11); // "Substitui" 5 por 11 (não é direto como no vector)
    }
    
    // Mostrar todos os valores do set
    cout << "Valores no set:\n";
    for (int v : valores) {
        cout << v << endl;
}
}
