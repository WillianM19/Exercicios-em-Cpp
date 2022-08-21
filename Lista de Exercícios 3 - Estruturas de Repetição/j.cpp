/*j)  Elaborar  um  programa  que  apresente  os  valores  de  conversão  de  graus  Celsius  em 
graus  Fahrenheit,  de  dez  em  dez  graus,  iniciando  a  contagem  em  dez  graus  Celsius  e 
finalizando  em  cem  graus  Celsius.  O  programa  deve  apresentar  os  valores  das  duas 
temperaturas. */

#include <iostream>
using namespace std;

int main(){
    int F;
    for (int C = 10; C <= 100; C+=10){
        cout << "------------------------------\n";
        cout << "Celsius: " << C << "\n";
        F = (C * 1.8) + 32; //calculo de conversão
        cout << "Fahrenheit: " << F << "\n\n";
    }
}