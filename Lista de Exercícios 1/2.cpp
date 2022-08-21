#include <iostream>
using namespace std;

int main(){
    int base, altura, area;
    cout << "Digite o tamanho da base do retangulo: ";
    cin >> base;
    cout << "\nDigite o tamanho da altura do retangulo: ";
    cin >> altura;
    area = base * altura; // Calcula a área
    cout << "\nA área do retangulo é: " << area << "\n";
}