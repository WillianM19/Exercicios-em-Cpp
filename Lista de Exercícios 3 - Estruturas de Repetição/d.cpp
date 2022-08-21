/* d)  Elaborar um programa que apresente o somatório dos valores pares existentes na faixa 
de 1 até 500. */

#include <iostream>
using namespace std;

int main(){
    int total;
    for(int i = 1; i <= 500; i++){
        if (i % 2 == 0){
            total += i;
            if (i < 500){
                cout << i << " + ";
            } else {
                cout << i << " = " << total << ".\n";
            }
        }
    }
    return 0;
}