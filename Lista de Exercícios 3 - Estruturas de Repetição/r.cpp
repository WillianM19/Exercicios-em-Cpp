/* r)  Elaborar um programa que leia valores positivos inteiros até que um valor negativo seja 
informado. Ao final devem ser apresentados o maior e o menor valores informados pelo 
usuário. */

#include <iostream>
using namespace std;

int main(){
    int valor = 0, vMenor = 0, vMaior = 0;
    while (valor >= 0){
        cout << "Insira uma número: ";
        cin >> valor;
        if (vMenor == 0 && vMaior == 0){
            vMenor = vMaior = valor; //seleciona os valores iniciais para comparação
        }
        if (valor >= 0){ //determina os valores enquanto a entrada for positiva
            if (vMenor > valor){ //determina o menor
                vMenor = valor;
            }
            if (vMaior < valor){ //determina o maior
                vMaior = valor;
            }
        }
    }
    cout << "-----------------------------\n";
    cout << "Maior valor: " << vMaior << "\n";
    cout << "Menor valor (Positivo): " << vMenor << "\n";
    cout << "Menor valor (Negativo): " << valor << "\n";
    return 0;
}