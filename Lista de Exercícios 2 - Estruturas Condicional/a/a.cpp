#include <iostream>
using namespace std;

int main(){
    int a, b, diferenca;

    cout << "Insira o valor de a: ";
    cin >> a;

    cout << "Insira o valor de b: ";
    cin >> b;

    if (a > b){
        diferenca = a - b;
        cout << "O maior é a\n";
    } else if (a == b){
        diferenca = a - b;
        cout << "O valor é igual\n";
    }else {
        diferenca = b - a;
        cout << "O maior é b\n";
    };
    cout << "----------------------------------\n";
    cout << "A diferença é " << diferenca << "\n";
    return 0;
}