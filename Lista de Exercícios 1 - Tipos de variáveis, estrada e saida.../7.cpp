#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int valor;
    cout << "Insira o valor a ser elevado ao quadrado: ";
    cin >> valor;
    cout << "O resultado é " << pow(valor,2); //Calcula e imprime
    return 0;
}