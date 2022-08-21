#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float graus, radianos;
    float pi = 3.14159;
    cout << "Insira a quantidade de graus para converter para radianos: ";
    cin >> graus;
    radianos = (graus * pi)/180;
    cout << "O valor em radianos é: " << radianos << "\n";
}