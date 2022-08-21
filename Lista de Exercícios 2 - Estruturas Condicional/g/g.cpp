#include <iostream>
using namespace std;

int main(){
    int A, B, C, D;
    cout << "Insira o valor de A: ";
    cin >> A;
    cout << "Insira o valor de B: ";
    cin >> B;
    cout << "Insira o valor de C: ";
    cin >> C;
    cout << "Insira o valor de D: ";
    cin >> D;

    if(A % 2 == 0 && A % 3 == 0){
        cout << A << " é divisível por 2 e 3\n";
    }
    if(B % 2 == 0 && B % 3 == 0){
        cout << B <<" é divisível por 2 e 3\n";
    }
    if(C % 2 == 0 && C % 3 == 0){
        cout << C << " é divisível por 2 e 3\n";
    }
    if(D % 2 == 0 && D % 3 == 0){
        cout << D << " é divisível por 2 e 3\n";
    }
}