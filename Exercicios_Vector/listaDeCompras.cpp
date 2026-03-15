#include <windows.h>
#include <iostream>
#include <vector>
#include <algorithm>

vector<string> listaDeCompras;

using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    while (true) {
        string escolha;
        cout << "Escolha uma opção: " << endl;
        cout << "(1) --> Adicionar" << endl;
        cout << "(2) --> Listar" << endl;
        cout << "(3) --> Remover" << endl;
        cout << "(4) --> Alterar" << endl;
        cout << "(5) --> Sair" << endl;
        cout << "Opção: ";
        getline(cin, escolha);
        
        string listaEscolhas[] = {"1", "2", "3", "4", "5"};
        
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
            string item;
            cout << "Digite o nome do item a ser adicionado: ";
            getline(cin, item);
            
            if (item.length() == 0) {
                cout << "Não é possível inserir item vazio!" << endl;
                continue;
            }
            
            for (auto& c : item) {
                c = toupper(c);
            }
            
            if (find(listaDeCompras.begin(), listaDeCompras.end(), item) == listaDeCompras.end()) {
                listaDeCompras.push_back(item);
                cout << "Item " << item << " adicionado com sucesso!" << endl;
            }
            else {
                cout << "Item já foi inserido anteriormente!" << endl;
            }
        }
        else if (escolha == "2") {
            if (listaDeCompras.size() > 0) {
                cout << "*************Lista de Compras*************" << endl;
                for (short i = 0; i < listaDeCompras.size(); i++) {
                    cout << (i+1) << " - " << listaDeCompras[i] << endl;
                }
                cout << "******************************************" << endl;
                
            }
            else {
                cout << "Lista de compras vazia!" << endl;
            }
            
        }
        else if (escolha == "3") {
           if (listaDeCompras.size() > 0) {
                cout << "*************Lista de Compras*************" << endl;
                for (short i = 0; i < listaDeCompras.size(); i++) {
                    cout << (i+1) << " - " << listaDeCompras[i] << endl;
                }
                cout << "******************************************" << endl;
                
                short numeroDeletar;
                cout << "Digite o número do item a ser deletado: ";
                cin >> numeroDeletar;
                
                getline(cin, escolha); // flush do buffer de entrada
                
                listaDeCompras.erase(listaDeCompras.begin() + (numeroDeletar - 1));
                cout << "Item deletado com sucesso!" << endl;
            }
            else {
                cout << "Lista de compras vazia!" << endl;
            }
        }
        else if (escolha == "4") {
            if (listaDeCompras.size() > 0) {
                cout << "*************Lista de Compras*************" << endl;
                for (short i = 0; i < listaDeCompras.size(); i++) {
                    cout << (i+1) << " - " << listaDeCompras[i] << endl;
                }
                cout << "******************************************" << endl;
                
                short numeroAlterar;
                cout << "Digite o número do item a ser alterado: ";
                cin >> numeroAlterar;
                getline(cin, escolha); // flush do buffer de entrada
                
                string itemAlterado;
                cout << "Digite o nome do item: ";
                getline(cin, itemAlterado);
                
                if (itemAlterado.length() == 0) {
                    cout << "Não é possível inserir item vazio!" << endl;
                    continue;
                }
                
                for (auto& c : itemAlterado) {
                    c = toupper(c);
                }
                
                if (find(listaDeCompras.begin(), listaDeCompras.end(), itemAlterado) == listaDeCompras.end()) {
                    string itemAnterior = listaDeCompras[numeroAlterar-1];
                    listaDeCompras[numeroAlterar-1] = itemAlterado;
                    
                    cout << "Item " << itemAnterior << " foi alterado para " << itemAlterado << "!" << endl;
                }
                else {
                    cout << "Este item já foi inserido anteriormente!" << endl;
                }
                
                
            }
            else {
                cout << "Lista de compras vazia!" << endl;
            }
        }
        else if (escolha == "5") {
            cout << "Saindo do programa!" << endl;
            break;
        }
        
        
    }

    system("pause");
}