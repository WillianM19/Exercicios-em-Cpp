#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int volume, raio;
    cout << "Insira o raio da esfera: ";
    cin >> raio;
    cout << pow(raio, 3);

    volume = (4 / 3) * 3.14159 * pow(raio, 3); // caucular volume da esféra

    cout << "O valor do raio da esfera é: " << volume << "\n";
    return 0;
}