/* A) Elaborar um programa que apresente como resultado os números inteiros existentes na 
faixa de valores de 15 a 200. */

#include <iostream>
using namespace std;

int main(){
    for(int i = 15; i <= 200; i++){
        cout << i;
        if (i < 200){
            cout << ", ";
        } else {
            cout << ".\n";
        }
    }
}