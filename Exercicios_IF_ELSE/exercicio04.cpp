/*
4) Uma ótica quer fazer um desconto diferenciado com base na idade do usuário em um
modelo de óculos que custa R$200,00.
O desconto será igual a idade do usuário, porém o desconto mínimo será de 10% e o
desconto máximo será de 80%.
Faça um programa que pergunte a idade do usuário e então mostre o valor final dos óculos
e o desconto adquirido.
*/

#include <iostream>
using namespace std;

int main() {
    int idade;
    float preco = 200.0;
    float desconto;
    float valorFinal;

    cout << "Digite sua idade: ";
    cin >> idade;

    desconto = idade;

    if (desconto < 10) {
        desconto = 10;
    }
    else if (desconto > 80) {
        desconto = 80;
    }

    valorFinal = preco - (preco * desconto / 100);

    cout << "Desconto: " << desconto << "%" << endl;
    cout << "Valor final: R$ " << valorFinal << endl;
}