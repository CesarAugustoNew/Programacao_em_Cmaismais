/* Faça um programa para converter Graus Celsius em Fahrenheit informado pelo usuário: 
Escala: 0 ~ 100 ºC    →     32 ~ 212 ºF */

#include <iostream>

using namespace std;

int main(){

    float celsius, fahrenheit;

    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 1.8) + 32;

    cout << "A temperatura em Fahrenheit sera de: " << fahrenheit << endl;

    system("pause");
}