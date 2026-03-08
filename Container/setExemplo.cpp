#include <iostream>
#include <set>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    set<int> sorteio;
    srand(time(0));

    while (sorteio.size() < 6)
        sorteio.insert(rand() % 60 + 1);

    cout << "Números sorteados: ";
    for (int num : sorteio)
        cout << num << " ";
    cout << endl;
}