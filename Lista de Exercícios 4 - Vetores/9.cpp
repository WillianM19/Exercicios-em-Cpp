// 09. Faça um algoritmo para ler um vetor de 20 números. Após isto, ler mais um número qualquer, calcular e escrever quantas vezes esse número aparece no vetor.

#include <iostream>
using namespace std;

int main(){
    float vet[20], comparador, aux = 0;

    for (int i = 0; i < 10; i++){
        cout << "Insira o número" << "(" << i + 1 << "/10): ";
        cin >> vet[i];
    }
    cout << "Insira o número para comparação: ";
    cin >> comparador;

    for (int i = 0; i < 10; i++){
        if (vet[i] == comparador){
            aux++;
        }
    }
    cout << "O número " << comparador << " aparece " << aux << " vezes.\n";
    return 0;
}