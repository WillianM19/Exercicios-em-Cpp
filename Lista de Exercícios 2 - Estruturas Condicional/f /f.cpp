#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int A, B, C, menor, maior, mediano;
    cout << "Insira o valor de A: ";
    cin >> A;
    cout << "Insira o valor de B: ";
    cin >> B;
    cout << "Insira o valor de C: ";
    cin >> C;

    if (A > B && A > C){
        maior = A;
        if (B > C){
            mediano = B;
            menor = C;
        } else {
            mediano = C;
            menor = B;
        }
    } else if (B > A && B > C) {
        maior = B;
        if (A > C){
            mediano = A;
            menor = C;
        } else {
            mediano = C;
            menor = A;
        }
    } else if (C > A && C > B){
        maior = C;
        if (A > B){
            mediano = A;
            menor = B;
        } else {
            mediano = B;
            menor = A;
        }
    }

    cout << menor << ", " << mediano << ", " << maior << "\n";
}