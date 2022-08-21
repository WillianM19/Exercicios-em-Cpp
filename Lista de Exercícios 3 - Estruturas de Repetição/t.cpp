/* t)  Elaborar um programa que apresente os quadrados sem armazená-los na memória dos 
valores inteiros existentes na faixa de valores de 15 a 200 com saltos de 3 em 3.  
 */

#include <iostream>
using namespace std;

int main(){
    for (int i = 15; i <= 200; i+=3){ //15 a 200 com saltos 3 em 3
        if (i < 197){ //Pontuações, calculo e impressão.
            cout << i * i << ", ";
        } else {
            cout << i * i << '.' << "\n";
        }
    }
    return 0;
}