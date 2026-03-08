#include <iostream>
#include <map>
using namespace std;

int main() {
  map<string, string> usuario;

  // Inserir campos e valores
  usuario["nome"] = “Daniel";
  usuario["email"] = “daniel@email.com";
  usuario["profissao"] = "Desenvolvedor";

  usuario["profissao"] = "Analista de Sistemas"; // Atualizando dados
  
  // Mostrando os dados
  cout << "Dados do usuário:\n";
  for (auto& campo : usuario) {
    cout << campo.first << ": " << campo.second << endl;
  }
}