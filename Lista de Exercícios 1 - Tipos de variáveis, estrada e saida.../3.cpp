#include <iostream>
using namespace std;

int main(){
    int fahrenheit, celsius;
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;
    fahrenheit = celsius * 9 / 5 + 32; //converte a temperatura para Fahrenheit
    cout << "\nA temperatura convertida para Fahrenheit é: " << fahrenheit << "\n";
    return 0;
}