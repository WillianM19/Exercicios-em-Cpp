//01. Faça um Programa que preencha um vetor de 5 números inteiros e mostre-os
#include <iostream>
using namespace std;

int main(){
    int v[5];
    for (int i = 0; i < 5; i++){ // Salva os valóres
        v[i] = i + 1;
    }
    for (int i = 0; i < 5; i++){ //Mostra os valóres
        if ( i < 4 ){
            cout << v[i] << ", ";
        } else {
            cout << v[i] << ".\n";
        }
    }
    return 0;
}