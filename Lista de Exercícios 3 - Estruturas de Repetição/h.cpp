/* h)  Escrever um programa que apresente como resultado a potência de uma base qualquer 
elevada a um expoente qualquer, ou seja, de BE, em que B é o valor da base e E o valor 
do  expoente.  Considere  apenas  a  entrada  de  valores  inteiros  e  positivos,  ou  seja,  de 
valores naturais. Sugestão: não utilize o formato “base ↑ expoente”, pois é uma solução 
muito  trivial.  Use  a  técnica  de  laço,  em  que  o  valor  da  base  deve  ser  multiplicado  o 
número de vezes determinado no expoente.  */

#include <iostream>
using namespace std;

int main(){
    int B, E;
    long int total;
    total = 1;
    cout << "Insira o número: ";
    cin >> B;
    cout << "Insira o expoente: ";
    cin >> E;
    
    if ( B >= 0 && E >= 0){ // Checa se a entrada é positiva
        for ( int i = 0; i < E; i++){ //Multiplica a base
            total *= B;
        }
        cout << "Resultado: " << total << "\n";
    } else {
        cout << "Valor inserido inválido!";
    }
    return 0;
}