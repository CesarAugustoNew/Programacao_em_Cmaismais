#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    srand(time(0));
    
    short vitorias = 0;
    short empates = 0;
    short derrotas = 0;
    
    // Passo 1: Criar sistema de escolhas para Pedra Papel Tesoura e Sair
    while (true) {
        cout << "Escolha uma opção: " << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << "(R) --> Pedra" << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << "(P) --> Papel" << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << "(T) --> Tesoura" << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << "(X) --> Sair" << endl;
        
        string escolhaJogador;
        cout << "Opção: ";
        cin >> escolhaJogador;
        
        if (escolhaJogador.length() != 1) {
            cout << "Opção inválida!\n" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            continue;
        }
        
        escolhaJogador = toupper(escolhaJogador[0]);
        
        if (escolhaJogador != "R" && escolhaJogador != "P"
        && escolhaJogador != "T" && escolhaJogador != "X") {
            cout << "Opção inválida!\n" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            continue;
        }
        else if (escolhaJogador == "X") {
            cout << "Saindo do programa...\n" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            break;
        }
        
        // Passo 2: Criar a escolha do PC
        short escolhaPCNum = rand() % 3;
        string escolhaPC;
        
        if (escolhaPCNum == 0) escolhaPC = "R";
        else if (escolhaPCNum == 1) escolhaPC = "P";
        else if (escolhaPCNum == 2) escolhaPC = "T";
        
        // Passo 3: Informar as escolhas
        
        cout << "Você escolheu ";
        this_thread::sleep_for(chrono::milliseconds(1000));
        if (escolhaJogador == "R") cout << "Pedra" << endl;
        else if (escolhaJogador == "P") cout << "Papel" << endl;
        else if (escolhaJogador == "T") cout << "Tesoura" << endl;
        
        this_thread::sleep_for(chrono::milliseconds(1000));
        
        cout << "O PC escolheu ";
        this_thread::sleep_for(chrono::milliseconds(1000));
        if (escolhaPC == "R") cout << "Pedra" << endl;
        else if (escolhaPC == "P") cout << "Papel" << endl;
        else if (escolhaPC == "T") cout << "Tesoura" << endl;
        
        this_thread::sleep_for(chrono::milliseconds(1000));
        
        cout << "Analisando resultado...\n" << endl;
        
        this_thread::sleep_for(chrono::milliseconds(2000));
        
        // Passo 4: Avaliar as escolhas e definir vencedor
        if (escolhaJogador == escolhaPC) {
            cout << "Empatou!" << endl;
            empates++;
        }
        else if (escolhaJogador == "R" && escolhaPC == "P") {
            cout << "Papel embrulha Pedra" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            cout << "Você perdeu!" << endl;
            derrotas++;
        }
        else if (escolhaJogador == "R" && escolhaPC == "T") {
            cout << "Pedra esmaga Tesoura" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            cout << "Você venceu!" << endl;
            vitorias++;
        }
        else if (escolhaJogador == "P" && escolhaPC == "R") {
            cout << "Papel embrulha Pedra" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            cout << "Você venceu!" << endl;
            vitorias++;
        }
        else if (escolhaJogador == "P" && escolhaPC == "T") {
            cout << "Tesoura corta Papel" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            cout << "Você perdeu!" << endl;
            derrotas++;
        }
        else if (escolhaJogador == "T" && escolhaPC == "R") {
            cout << "Pedra esmaga Tesoura" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            cout << "Você perdeu!" << endl;
            derrotas++;
        }
        else if (escolhaJogador == "T" && escolhaPC == "P") {
            cout << "Tesoura corta Papel" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            cout << "Você venceu!" << endl;
            vitorias++;
        }
        
        this_thread::sleep_for(chrono::milliseconds(1000));
        
        
        // Passo 5: Placar
        cout << "\n****************************************" << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << "Vitórias: " << vitorias << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << "Empates: " << empates << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << "Derrotas: " << derrotas << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << "****************************************\n" << endl;
        
        // Passo 6: Temporização
        this_thread::sleep_for(chrono::milliseconds(1000));
       
        
    }
}