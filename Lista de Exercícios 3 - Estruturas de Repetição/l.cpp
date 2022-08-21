/* l)  Elaborar um programa que leia quinze valores numéricos inteiros e no final apresente o 
somatório da fatorial de cada valor lido. */

#include <iostream>
using namespace std;

int main(){
    unsigned long int valor, total = 0;
    for(int i = 1; i <= 15; i++){ //ler 15 valores e
        cout << "Insira um número (" << i << "/15): ";
        cin >> valor;
        for (int v = valor; v > 0; v--){ //pega o fatorial do número inserido.
            if (v > 1) {
                cout << v << " x ";
            } else {
                cout << v << " = " << valor;
                total += valor; //adiociona o valor do fatorial ao valor total da soma dos fatoriais
            }
            valor *= v - 1;
        }
        cout << "\n";
    }
    cout << "----------------------------------------------\n";
    cout << "Somatório dos fatoriais: " << total << "\n";
    return 0;
}