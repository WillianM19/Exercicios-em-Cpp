/* o)  Construir  um  programa  que  apresente  como  resultado  a  fatorial  dos  valores  ímpares
situados na faixa numérica de 1 até 10.  */

#include <iostream>
using namespace std;

int main() {
    int valorTotal;
    for (int i = 1; i <= 10; i++){ //faixa de números 1 até 10
        if (i % 2 != 0){
            valorTotal = i;
            for(int v = i; v > 0; v--){ //calculo e impressão do fatorial
                if (v > 1){
                    cout << v << " x ";
                } else {
                    cout << v << " = " << valorTotal << "\n";
                }
                valorTotal *= v - 1;
            }
        }
    }
}