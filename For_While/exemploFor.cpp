#include <iostream>
#include <cstdlib> // Para rand() e srand()
#include <ctime>  // Para time()

using namespace std;

const int TOTAL_LANCAMENTOS = 1000;

int main() {

  setlocale(LC_ALL,"Portuguese_Brazil");
  // srand --> semente dos números aleatóris
  // time(0) --> tempo em segundos desde 1970 (EPOCH TIME)
  srand(time(0)); 
  short cont1 = 0;
  short cont2 = 0;
  short cont3 = 0;
  short cont4 = 0;
  short cont5 = 0;
  short cont6 = 0;
  
  for (int i = 0; i < TOTAL_LANCAMENTOS; i++) {
    // Gera um número entre 1 e 6

    int resultado = rand() % 6 + 1; 
    
    if (resultado == 1) cont1++;
    else if (resultado == 2) cont2++;
    else if (resultado == 3) cont3++;
    else if (resultado == 4) cont4++;
    else if (resultado == 5) cont5++;
    else cont6++;
  }
  cout << "Numero 1: " << cont1 << " vezes" << endl;
  cout << "Numero 2: " << cont2 << " vezes" << endl;
  cout << "Numero 3: " << cont3 << " vezes" << endl;
  cout << "Numero 4: " << cont4 << " vezes" << endl;
  cout << "Numero 5: " << cont5 << " vezes" << endl;
  cout << "Numero 6: " << cont6 << " vezes" << endl;
  system("pause");
}
