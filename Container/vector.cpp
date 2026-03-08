#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  vector<string> nomes = {
    "Carlos", "Beatriz", "Ana", "Lucas", "Pedro", "Mariana", "João", "Fernanda"
  };

  // Remover "Pedro"
  nomes.erase(nomes.begin() + 4);

  // Adicionar novo nome no final
  nomes.push_back("Gabriel");

  // Mostrar nomes que contêm a letra 'e'
  cout << "Nomes que contêm a letra 'e':\n";
  
  for (auto nome : nomes) {
    for (char c : nome) {
      if (tolower(c) == 'e') {
        cout << "- " << nome << "\n";
        break;
      }
    }
  }
}