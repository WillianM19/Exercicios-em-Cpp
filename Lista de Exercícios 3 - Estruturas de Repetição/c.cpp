/* c)  Construir um programa que apresente a soma dos cem primeiros números naturais (1 + 
2 + 3 +...+ 98 + 99 + 100). */

#include <iostream>
using namespace std;

int main(){
    int total;
    for(int i = 1; i <= 100; i++){
        total += i;
        if (i < 100){
            cout << i << " + ";
        } else {
            cout << i << " = " << total << ".\n";
        }
    }

}