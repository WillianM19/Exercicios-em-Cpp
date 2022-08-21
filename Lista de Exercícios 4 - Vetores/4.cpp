// 04. Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação no seu respectivo vetor. Imprima a idade e a altura na ordem inversa a ordem lida

#include <iostream>
using namespace std;

int main(){
    float idade[5], altura [5];

    for (int i = 0; i < 5; i++){
        cout << "Insira a idade do aluno " << i + 1 << ": ";
        cin >> idade[i];
        cout << "Insira a altura do aluno " << i + 1 << ": ";
        cin >> altura[i];
    }
    cout << "----------------------------------\n";
    cout << "Idades: ";
    for (int i = 4; i >= 0; i--){
        if (i > 0){
            cout << idade[i] << ", ";
        } else {
            cout << idade[i] << ".\n";
        }
    }
    cout << "Alturas: ";
    for (int i = 4; i >= 0; i--){
        if (i > 0){
            cout << altura[i] << ", ";
        } else {
            cout << altura[i] << ".\n";
        }
    }
    return 0;
}