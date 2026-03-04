#include <iostream>  // Entrada e Saída de dados
#include <cstdlib>   // Aleatório
#include <ctime>     // Tempo
#include <locale.h>
#include <windows.h>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Inicializa o gerador de números aleatórios
    srand(time(0));

    int vitorias = 0;
    int derrotas = 0;
    int jogadorNumero, computadorNumero, soma;
    string escolhaUsuario;

    // Loop do Jogo
    while (true) 
    {
        // Solicita a escolha do usuário
        cout << "Escolha uma opção:" << endl;
        Sleep(300);
        cout << "P --> Par" << endl;
        Sleep(300);
        cout << "I --> Impar" << endl;
        Sleep(300);
        cout << "X --> Sair" << endl;
        Sleep(300);
        cout << "Opção: ";
        cin >> escolhaUsuario;

        // Validação das escolhas
        if (escolhaUsuario != "P" && escolhaUsuario != "I" && escolhaUsuario != "X") 
        {
            cout << "Escolha inválida\n" << endl;
            Sleep(1000);
            continue;
        }
        else if (escolhaUsuario == "X") 
        {
            cout << "Saindo do programa" << endl;
            Sleep(1000);
            break;
        }

        // Solicita o número do jogador
        cout << "Digite um número: ";
        cin >> jogadorNumero;

        // O computador escolhe um número aleatório entre 0 e 10
        computadorNumero = rand() % 11;

        // Calcula a soma dos números
        soma = jogadorNumero + computadorNumero;

        cout << "Você escolheu: " << jogadorNumero << endl;
        Sleep(1000);
        cout << "O computador escolheu: " << computadorNumero << endl;
        Sleep(1000);
        cout << "A soma dos números é... ";
        Sleep(1000);
        cout << soma << endl;
        Sleep(2000);

        // Exibe o resultado baseado na escolha do usuário
        if (escolhaUsuario == "P")  // Escolheu Par
        {
            if (soma % 2 == 0)  // Resultado Par
            {
                cout << "Você ganhou!" << endl;
                ++vitorias;
            }
            else  // Resultado Ímpar
            {
                cout << "Você perdeu!" << endl;
                ++derrotas;
            }
        }

        if (escolhaUsuario == "I")  // Escolheu Ímpar
        {
            if (soma % 2 == 0)  // Resultado Par
            {
                cout << "Você perdeu!" << endl;
                ++derrotas;
            }
            else  // Resultado Ímpar
            {
                cout << "Você ganhou!" << endl;
                ++vitorias;
            }
        }

        Sleep(1000);

        // Exibe o placar
        cout << "\n===========================================" << endl;
        Sleep(300);
        cout << "Vitórias: " << vitorias << endl;
        Sleep(300);
        cout << "Derrotas: " << derrotas << endl;
        Sleep(300);
        cout << "===========================================\n" << endl;
        Sleep(1000);
    }

    system("pause");
    return 0;
}