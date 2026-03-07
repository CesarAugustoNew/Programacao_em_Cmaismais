#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL,"Portuguese_Brazil");
  short i = 0;
  // Contando de 0 a 100
  while (i <= 100) {
    cout << i << endl;
    i++;
  }
  system("pause");
}
