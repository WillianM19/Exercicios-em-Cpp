/* s)  Elaborar  um  programa  que  apresente  o  resultado  inteiro  da  divisão  de  dois  números 
quaisquer, representando o dividendo e o divisor da divisão a ser processada. Sugestão: 
para  a  elaboração  do  programa,  não  utilize  o  operador  aritmético  de  divisão  com 
quociente  inteiro  div. Use  uma  solução  baseada  em  laço.  O  programa  deve  apresentar 
como resultado (quociente) quantas vezes o divisor cabe no dividendo.   */

#include <iostream>
using namespace std;

int main(){
    int dividendo, divisor, resto, total = 0;
    cout << "Insira o dividendo: ";
    cin >> dividendo;
    cout << "Insira o divisor: ";
    cin >> divisor;

    while (dividendo > 0){ //diminui dividendo pelo divisor e registra a quantidade de vezes
        dividendo -=  divisor;
        total++;
    }
    if (dividendo < 0) { //se o número for negativo significa que a divisão terá resto, logo reduz um do total
      total--;
    }
    resto = dividendo * -1; // trasforma o resto em número positivo
    cout << "-----------------------------\n";
    cout << "Resultado: " << total << "\n";
    cout << "Resto da divisão: " << resto << "\n";
}