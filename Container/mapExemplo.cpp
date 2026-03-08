#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
  vector<map<string, string>> personagens = {
    {{"nome", "Guerreiro"}, {"vida", "100"}, {"ataque", "30"}, {"defesa", "20"}},
    {{"nome", "Mago"}, {"vida", "80"}, {"ataque", "40"}, {"defesa", "15"}},
  };

  for (auto personagem : personagens) {
    string nome = personagem["nome"];
    int vida = stoi(personagem["vida"]); // conversão string -> int
    int ataque = stoi(personagem["ataque"]);
    int defesa = stoi(personagem["defesa"]);

    cout << "Personagem: " << nome << endl;
    cout << " Vida: " << vida << endl;
    cout << " Ataque: " << personagem["ataque"] << endl;
    cout << " Defesa: " << personagem["defesa"] << "\n" << endl;
  }
}