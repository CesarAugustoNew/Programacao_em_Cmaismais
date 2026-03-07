#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include <cctype>

using namespace std;

int main()
{
    srand(time(0));

    // Passo 1: Criar variaveis das vidas
    short vidaJogador = 10;
    short vidaPC = 10;

    // Passo 2: Sistema de escolhas
    while (true)
    {
        // Passo 7: Mostrar valores atuais de vida
        cout << "\n*****************************************" << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << "Vida Jogador: " << vidaJogador << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << "Vida PC: " << vidaPC << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << "*****************************************\n" << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));

        // Passo 8: Verificar se alguém perdeu o jogo
        if (vidaJogador <= 0)
        {
            cout << "Você perdeu a batalha!\n" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            break;
        }
        else if (vidaPC <= 0)
        {
            cout << "Você venceu a batalha!\n" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            break;
        }

        cout << "Escolha um ataque: " << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << "(S) --> Soco" << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << "(C) --> Cabeçada" << endl;
        this_thread::sleep_for(chrono::milliseconds(300));

        string escolha;
        cout << "Opção: ";
        cin >> escolha;

        if (escolha.length() != 1)
        {
            cout << "Opção inválida!\n" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            continue;
        }

        escolha[0] = toupper(escolha[0]);

        // Passo 3: Definição dos parametros do jogador
        short combateJogador;
        short danoJogador;
        short danoRecebidoJogador;
        string ataque;

        if (escolha != "S" && escolha != "C")
        {
            cout << "Opção inválida!\n" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            continue;
        }
        else if (escolha == "S")
        {
            ataque = "Soco";
            combateJogador = rand() % 6 + 1;
            danoJogador = rand() % 6 + 1;
            danoRecebidoJogador = 0;
        }
        else if (escolha == "C")
        {
            ataque = "Cabeçada";
            combateJogador = 4;
            danoJogador = 3;
            danoRecebidoJogador = 1;
        }

        // Passo 4: Definição dos parametros do PC
        short combatePC = rand() % 6 + 1;
        short danoPC = rand() % 6 + 1;

        // Passo 5: Informar os resultados de combate
        cout << "Você atacou com " << ataque << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));

        for (short i = 0; i < 10; i++)
        {
            cout << "\rSeu poder de combate é ";
            short dado = rand() % 6 + 1;

            if (dado == 1) cout << "⚀" << flush;
            else if (dado == 2) cout << "⚁" << flush;
            else if (dado == 3) cout << "⚂" << flush;
            else if (dado == 4) cout << "⚃" << flush;
            else if (dado == 5) cout << "⚄" << flush;
            else if (dado == 6) cout << "⚅" << flush;

            this_thread::sleep_for(chrono::milliseconds(200));
        }

        cout << "\rSeu poder de combate é ";

        if (combateJogador == 1) cout << "⚀";
        else if (combateJogador == 2) cout << "⚁";
        else if (combateJogador == 3) cout << "⚂";
        else if (combateJogador == 4) cout << "⚃";
        else if (combateJogador == 5) cout << "⚄";
        else if (combateJogador == 6) cout << "⚅";

        cout << " --> " << combateJogador << endl << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));

        cout << "O PC atacou com Soco" << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));

        for (short i = 0; i < 10; i++)
        {
            cout << "\rO poder de combate do PC é ";
            short dado = rand() % 6 + 1;

            if (dado == 1) cout << "⚀" << flush;
            else if (dado == 2) cout << "⚁" << flush;
            else if (dado == 3) cout << "⚂" << flush;
            else if (dado == 4) cout << "⚃" << flush;
            else if (dado == 5) cout << "⚄" << flush;
            else if (dado == 6) cout << "⚅" << flush;

            this_thread::sleep_for(chrono::milliseconds(200));
        }

        cout << "\rO poder de combate do PC é ";

        if (combatePC == 1) cout << "⚀";
        else if (combatePC == 2) cout << "⚁";
        else if (combatePC == 3) cout << "⚂";
        else if (combatePC == 4) cout << "⚃";
        else if (combatePC == 5) cout << "⚄";
        else if (combatePC == 6) cout << "⚅";

        cout << " --> " << combatePC << endl << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));

        cout << "Analisando resultado..." << endl;
        this_thread::sleep_for(chrono::milliseconds(2000));

        // Passo 6: Verificar quem ganhou o turno e desferir o dano
        if (combateJogador == combatePC)
        {
            cout << "O Turno empatou!" << endl;
        }
        else if (combateJogador > combatePC)
        {
            cout << "Você venceu o turno!" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));

            cout << "Você causou " << danoJogador << " de dano!" << endl;
            vidaPC -= danoJogador;

            if (danoRecebidoJogador > 0)
            {
                this_thread::sleep_for(chrono::milliseconds(1000));
                cout << "Você sofreu " << danoRecebidoJogador << " de dano!" << endl;
                vidaJogador -= danoRecebidoJogador;
            }
        }
        else if (combateJogador < combatePC)
        {
            cout << "O PC venceu o turno!" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));

            cout << "Você sofreu " << danoPC << " de dano!" << endl;
            vidaJogador -= danoPC;
        }

        this_thread::sleep_for(chrono::milliseconds(1000));
    }

    return 0;
}