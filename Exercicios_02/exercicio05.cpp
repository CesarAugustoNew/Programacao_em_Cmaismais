/*
5) Uma empresa pretende fazer um reajuste salarial para os funcionários.
Reajustes:
- Salário abaixo de R$1.500,00 -> 25%
- Salário entre R$1.500,00 e R$1.999,99 -> 20%
- Salário entre R$2.000,00 e R$2.999,99 -> 15%
- Salário entre R$3.000,00 e R$4.999,99 -> 10%
- Salário igual ou acima de R$5.000,00 -> 5%

Faça um programa que pergunte o salário atual e mostre:
1. O salário atual
2. A porcentagem do reajuste
3. O aumento em R$
4. O salário final após o reajuste
*/

#include <iostream>
using namespace std;

int main() {
    float salario, porcentagem, aumento, salarioFinal;

    cout << "Digite o seu salario: ";
    cin >> salario;

    if (salario < 1500)
    {
        salarioFinal = salario * 1.25;
    }
    else if (salario >= 1500 && salario < 1999)
    {
        salarioFinal = salario * 1.20;
    }
    else if (salario >= 2000 && salario < 2999)
    {
        salarioFinal = salario * 1.15;
    }
    else if (salario >= 3000 && salario < 4999)
    {
        salarioFinal = salario * 1.10;
    }
    else if (salario >= 5000)
    {
        salarioFinal = salario * 1.05;
    }

    aumento = salarioFinal - salario;
    porcentagem = (aumento / salario) * 100;

    cout << "Seu salario atual é de: R$" << salario << " o aumento em R$ é de " << aumento << " a porcentagem do reajuste sera de " << porcentagem << "% e o salario final é: R$" << salarioFinal << endl;
}