/*
===============================================================
Programa: Atendimento de fila
Autor: Cesar
Data: 15/03/2026
Descrição: Sistema de atendimento de fila usando vector.
===============================================================
*/
#include <windows.h>
#include <iostream>
#include <vector>

using namespace std;

vector<string> fila;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    while (true) {
        string escolha;
        cout << "Escolha uma opção: " << endl;
        cout << "(1) --> Adicionar" << endl;
        cout << "(2) --> Atender" << endl;
        cout << "(3) --> Listar" << endl;
        cout << "(4) --> Sair" << endl;
        cout << "Opção: ";
        getline(cin, escolha);
        
        string listaEscolhas[] = {"1", "2", "3", "4"};
        
        bool escolhaValida = false;
        for (auto opcao : listaEscolhas) {
            if (escolha == opcao) {
                escolhaValida = true;
            }
        }
        
        if (!escolhaValida) {
            cout << "Opção inválida!" << endl;
            continue;
        }
        
        if (escolha == "1") {
            string nome;
            cout << "Digite o nome do cliente: ";
            getline(cin, nome);
            
            fila.push_back(nome);
            cout << "Cliente " << nome << " adicionado a fila!" << endl;
        }
        else if (escolha == "2") {
            if (fila.size() > 0) {
                cout << "Atendendo o cliente " << fila[0] << endl;
                fila.erase(fila.begin());
                cout << "Atendimento concluído!" << endl;
            }
            else {
                cout << "Lista de clientes vazia!" << endl;
            }
        }
        else if (escolha == "3") {
            if (fila.size() > 0) {
                cout << "Fila de Atendimento!" << endl;
                for (short i=0; i<fila.size(); i++) {
                    cout << (i+1) << " - " << fila[i] << endl;
                }
                cout << "***********************" << endl;
            }
            else {
                cout << "Lista de clientes vazia!" << endl;
            }
        }
        else if (escolha == "4") {
            cout << "Saindo do programa!" << endl;
            break;
        }
        
        
    }
    system("pause");
}
