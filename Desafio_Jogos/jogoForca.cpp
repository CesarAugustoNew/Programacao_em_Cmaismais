#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Passo 1: Criar váriaveis
    string palavraSecreta, palavraSecretaMaiuscula, dica, palavraJog, letraJogador;
    string letrasTestadas;

    short tentativas = 10;

    // Passo 2: Pedir palavra e dica
    cout << "Digite uma palavra secreta: ";
    getline(cin, palavraSecreta);

    cout << "Digite uma dica: ";
    getline(cin, dica);

    for (short i = 0; i < 50; i++)
    {
        cout << endl;
    }

    // Passo 3: Colocar palavraSecreta em upper
    for (size_t i = 0; i < palavraSecreta.length(); i++)
    {
        palavraSecretaMaiuscula += toupper(palavraSecreta[i]);
    }

    // palavraSecretaMaiuscula = palavraSecreta;
    // transform(palavraSecretaMaiuscula.begin(), palavraSecretaMaiuscula.end(), palavraSecretaMaiuscula.begin(), ::toupper);

    // Passo 4: Ciclo principal e imprimir e ver se terminou
    cout << "Dica: " << dica << endl;

    while (true)
    {
        bool venceu = true;

        cout << "Tentativas: " << tentativas << endl;
        cout << "Palavra: ";

        for (size_t i = 0; i < palavraSecretaMaiuscula.length(); i++)
        {
            char letraSecreta = palavraSecretaMaiuscula[i];

            if (letraSecreta == ' ' || letraSecreta == '-' || palavraJog.find(letraSecreta) != string::npos)
            {
                cout << letraSecreta << " ";
            }
            else
            {
                cout << "_ ";
                venceu = false;
            }
        }

        cout << endl;

        if (venceu)
        {
            cout << "Você venceu!\n";
            break;
        }

        // Passo 5: Pedir letra ao usuário
        cout << "Digite uma letra/número: ";
        getline(cin, letraJogador);

        if (letraJogador.length() > 1)
        {
            cout << "Digite apenas 1 letra\n";
            continue;
        }

        // Converte char em uppercase
        letraJogador = toupper(letraJogador[0]);

        // Find: encontra um valor dentro de um container
        // nesse exemplo, procura a letra nas letras testadas
        if (letrasTestadas.find(letraJogador) != string::npos)
        {
            cout << "Letra digitada anteriormente\n";
            continue;
        }

        letrasTestadas += letraJogador;

        // Passo 6: Comparar se a letra existe na palavraSecreta
        bool letraCorreta = false;

        for (size_t i = 0; i < palavraSecretaMaiuscula.length(); i++)
        {
            char letraSecreta = palavraSecretaMaiuscula[i];

            if (letraSecreta == letraJogador[0])
            {
                letraCorreta = true;
                palavraJog += letraSecreta;
            }
        }

        if (!letraCorreta)
        {
            cout << "Letra inválida\n";
            tentativas--;
        }

        if (tentativas == 0)
        {
            cout << "Você perdeu, a palavra era: " << palavraSecretaMaiuscula << endl;
            break;
        }
    }

    system("pause");
}