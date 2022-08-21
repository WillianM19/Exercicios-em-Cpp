#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float A, B, C;
    cout << "Insira o valor de A: ";
    cin >> A;
    cout << "Insira o valor de B: ";
    cin >> B;
    cout << "Insira o valor de C: ";
    cin >> C;

    float delta = pow(B, 2) - 4 * A * C;
    float result1 = (- B + sqrt(delta)) / 2 * A;
    float result2 = (- B - sqrt(delta)) / 2 * A;

    cout << "--------------------------------------------\n";

    if (A != 0 && B != 0 && C != 0){
        cout << "Equação de segundo grau completa: \n" ;
    } else {
        cout << "Equação de segundo grau incompleta: \n";
    }

    cout << "--------------------------------------------\n";

    if (delta < 0){
        cout << "Não há solução real\n";
    } else if (delta > 0){
        cout << "Há duas soluções reais\n";
        cout << "Somando: " << result1 << "\n";
        cout << "Diminuindo: " << result2 << "\n";
    } else {
        cout << "Há apenas uma solução real\n";
        cout << result1 << "\n";
    }
    return 0;
}