//02. Faça um Programa que preencha um vetor de 10 números reais e mostre-os na ordem inversa
#include <iostream>
using namespace std;

int main(){
    float v[10];
    for (int i = 0; i < 10; i++){
        v[i] = i + 1;
    }
    for (int i = 9; i >= 0; i--){
        if ( i > 0 ){
            cout << v[i] << ", ";
        } else {
            cout << v[i] << ".\n";
        }
    }
    return 0;
}