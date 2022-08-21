/* b)  Elaborar um programa que mostre os resultados da tabuada de um número qualquer, a 
qual deve ser apresentada de acordo com sua forma tradicional. */

#include <iostream>
using namespace std;

int main(){
    float num, totalDivisao;
    cout << "Insira um número: ";
    cin >> num;

    cout << "\nAdição----------\n";
    for (int i = 0; i <= 10; i++){
        cout << num << " + " << i << " = " << num + i << "\n";
    }
    cout << "\nSubtração-------\n";
    for (int i = 0; i <= 10; i++){
        cout << num << " - " << i << " = " << num - i << "\n";
    }
    cout << "\nDivisão---------\n";
    for (int i = 0; i <= 10; i++){
        if (i == 0){
            totalDivisao = 0;
        } else {
            totalDivisao = num / i;
        }
        cout << num << " / " << i << " = " << totalDivisao << "\n";
    }
    cout << "\nMultiplicação---\n";
    for (int i = 0; i <= 10; i++){
        cout << num << " x " << i << " = " << num * i << "\n";
    }
}