#include <iostream>
#include <string>

using namespace std;

int main() {
  setlocale(LC_ALL,"Portuguese_Brazil");
  string senha;
  cout << "Digite a senha: ";
  getline(cin, senha);
  while (senha != "a senha") {
    cout << "Senha incorreta, digite \"a senha\": ";
    getline(cin, senha);
  }
  cout << "Acesso liberado!" << endl;
  system("pause");
}
