/* m) Elaborar  um  programa  que  leia  dez  valores  numéricos  reais  e  apresente  no  final  o 
somatório e a média dos valores lidos. */

#include <iostream>
using namespace std;

int main(){
    float media, soma, valor;
    for (int i = 1; i <= 10; i++){
        cout << "Insira um valor (" << i << "/10): ";
        cin >> valor;
        soma += valor;
        cout << "\n";
    }
    media = soma / 10;
    cout << "------------------------\n";
    cout << "Somatório: " << soma << "\n";
    cout << "Média: " << media << "\n";
}