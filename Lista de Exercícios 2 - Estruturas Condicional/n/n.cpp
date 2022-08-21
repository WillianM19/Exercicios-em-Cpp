#include <iostream>
using namespace std;

int main(){
    int A, B, C, total;
    cout << "Insira o valor de A: ";
    cin >> A;
    cout << "Insira o valor de B: ";
    cin >> B;
    cout << "Insira o valor de C: ";
    cin >> C;

    total = A + B + C;

    if (total >= 100){
        cout << "O total é " << total << "\n";
    }
    return 0;
}