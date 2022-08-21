#include <iostream>
using namespace std;

int main(){
    float A, B, soma, divisao, subtracao, multiplicacao;
    cout << "Insira o valor de A: ";
    cin >> A;
    cout << "Insira o valor de B: ";
    cin >> B;

    soma = A + B;
    divisao = A / B;
    subtracao = A - B;
    multiplicacao = A * B;

    cout << "\nA soma é " << soma;
    cout << "\nA divisão é " << divisao;
    cout << "\nA subtração é " << subtracao;
    cout << "\nA multiplicação é " << multiplicacao << "\n";
    return 0;
}