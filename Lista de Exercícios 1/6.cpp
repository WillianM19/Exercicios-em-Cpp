#include <iostream>
using namespace std;

int main(){
    int comprimento, largura, altura, volumeTotal;
    cout << "Insira o comprimento da caixa: ";
    cin >> comprimento;
    cout << "Insira a largura da caixa: ";
    cin >> largura;
    cout << "Insira a altura da caixa: ";
    cin >> altura;

    volumeTotal = comprimento * altura * largura; //calcular volume da caixa

    cout << "O volume total da caixa é: " << volumeTotal << "\n";
}