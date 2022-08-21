#include <iostream>
using namespace std;

int main(){
    int fahrenheit, celsius;
    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> fahrenheit;
    celsius = ((fahrenheit - 32) * 5) / 9; //converte a temperatura para celsius
    cout << "\nA temperatura convertida para Celsius é: " << celsius << "\n";
    return 0;
}