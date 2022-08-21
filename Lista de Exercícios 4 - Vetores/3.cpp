//03. Faça um Programa que leia 4 notas, mostre as notas e a média na tela.

#include <iostream>
using namespace std;

int main(){
    float notas[4], soma = 0, media = 0;
    for (int i = 0; i < 4; i++){
        cout << "Insira a nota: ";
        cin >> notas[i];
        soma += notas[i];
    }
    media = soma / 4;
    cout << "----------------------------------------\n";
    for (int i = 0; i < 4; i++){
        cout << "Nota " << i + 1 << ": " << notas[i] << "\n";
    }
    cout << "Media: " << media << endl;
    return 0;
}