// 07. . Escreva um programa para preencher um vetor A de 10 elementos inteiros e um valor X. Em seguida escrever na tela "ACHEI" se o valor X existir em A e "NÃO ACHEI" caso contrário.
#include <iostream>
using namespace std;

int main(){
    int A[10], X, aux = 0;

    for (int i = 0; i < 10; i++){
        cout << "Insira o número"
             << "(" << i + 1 << "/10): ";
        cin >> A[i];
    }
    cout << "Insira o valor de X: ";
    cin >> X;

    for (int i = 0; i < 10; i++){
        if (A[i] == X){
            cout << "Achei\n";
            break;
        } else {
            aux++;
        }
    }
    if (aux == 10) {
        cout << "Não Achei\n";
    }

    return 0;
}