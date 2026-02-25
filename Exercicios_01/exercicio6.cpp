#include <iostream>
#include <string>

using namespace std;

int main() {

    string nome;
    int idade, anoNascimento;
    float peso, altura, imc;

    cout << "Digite seu nome: ";
    cin >> nome;
    
    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite o ano de nascimento: ";
    cin >> anoNascimento;

    cout << "Digite seu peso (Kg): ";
    cin >> peso;

    cout << "Digite sua altura (em metros): ";
    cin >> altura;

    imc = peso / (altura * altura);

    cout << "\nSeu nome e " << nome << " e tem " << nome.length() << " caracteres." << endl;
    cout << "Voce tem " << idade << " anos e nasceu no ano de " << anoNascimento << "." << endl;
    cout << "Voce mede " << altura * 100 << " cm, pesa " << peso << " Kg e seu IMC e: " << imc << endl;

    system("pause");

}