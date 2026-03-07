#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL,"Portuguese_Brazil");
  short valor;
  cout << "Quanto é 2 + 2?" << endl;
  cin >> valor;
  while (valor != 4) {
    cout << "ERROOOOOUUUU!" << endl;
    cout << "Quanto é 2 + 2?" << endl;
    cin >> valor;
  }
  cout << "Certa a resposta!" << endl;
  system("pause");
}