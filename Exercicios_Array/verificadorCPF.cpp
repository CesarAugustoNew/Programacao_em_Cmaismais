#include <iostream>
#include <array>
using namespace std;

int main() {

    array<short, 11> cpf;
    int soma = 0;
    int resto;
    int digitoCalculado;

    cout << "Digite os 11 numeros do CPF (sem pontos e traco):\n";

    for (int i = 0; i < 11; i++) {
        cin >> cpf[i];
    }

    // calcular soma dos 9 primeiros digitos
    for (int i = 0; i < 9; i++) {
        soma += cpf[i] * (10 - i);
    }

    resto = soma % 11;

    if (resto < 2)
        digitoCalculado = 0;
    else
        digitoCalculado = 11 - resto;

    cout << "Digito informado: " << cpf[9] << endl;
    cout << "Digito calculado: " << digitoCalculado << endl;

    if (digitoCalculado == cpf[9]) {
        cout << "Primeiro digito verificador CORRETO\n";
    } else {
        cout << "Primeiro digito verificador INCORRETO\n";
    }

    return 0;
}