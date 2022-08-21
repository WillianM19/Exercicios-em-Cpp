/* p)  Elaborar um programa que apresente os resultados da soma e da média aritmética dos 
valores pares situados na faixa numérica de 50 até 70. */

#include <iostream>
using namespace std;

int main(){
    int vSoma = 0, vMedia = 0, vItems = 0;
    for (int i = 50; i <= 70; i++){ //faixa númerica
        if (i % 2 == 0){ //checa se é par
            if (i < 70){ //adiciona sinais de adição e igual
                cout << i << " + "; 
            } else {
                cout << i << " = "; 
            }
            vSoma += i; //calcula a soma dos items
            vItems++; //registra a quantidade de items
        }
    }
    cout << vSoma << "\n";
    vMedia = vSoma / vItems; //calcula a média dos items
    cout << "-------------------------------------------------------------\n";
    cout << "Média: " << vMedia << "\n";
    return 0;
}