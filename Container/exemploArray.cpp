// Escolher Personagem
#include <iostream>

using namespace std;

int main()
{
  string personagens[] = {"Guerreiro", "Mago", "Arqueiro", "Paladino", "Ninja"};
  int tamanho = sizeof(personagens) / sizeof(personagens[0]);
  cout << "Escolha seu personagem:\n";
  for (int i = 0; i < tamanho; i++) {
    cout << i + 1 << " - " << personagens[i] << endl;
  }
  int escolha;
  cout << "\nDigite o número do personagem: ";
  cin >> escolha;
  if (escolha >= 1 && escolha <= tamanho) {
    cout << "\nVocê escolheu: " << personagens[escolha - 1] << "!" << endl;
  }
  else {
    cout << "Opção inválida!" << endl;
  }
}
