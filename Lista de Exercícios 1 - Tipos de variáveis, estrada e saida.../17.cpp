#include <iostream>
using namespace std;

int main(){
    float pes, metros;
    float peMetro = 0.3048;

    cout << "Insira o valor a ser convertido de pés para metros: ";
    cin >> pes;
    metros = pes * peMetro; //calculo

    cout << "O valor convertido em metros é: " << metros << "\n";
}
//Ambas as questões (16 e 17) estavam iguais