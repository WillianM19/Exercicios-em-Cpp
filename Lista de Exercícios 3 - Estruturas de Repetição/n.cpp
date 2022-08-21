/* n)  Elaborar um programa que leia sucessivamente valores numéricos e apresente no final 
o somatório, a média e o total de valores lidos. O programa deve ler os valores enquanto 
o usuário estiver fornecendo valores positivos. Ou seja, o programa deve parar quando o 
usuário fornecer um valor negativo (menor que zero). */

#include <iostream>
using namespace std;

int main(){
    float valor = 0, vLidos = 0, vSoma = 0, vMedia = 0;
    while (valor >= 0){
        cout << "Insira um valor: ";
        cin >> valor;
        if (valor >=0){
            vSoma += valor;
            vLidos++;
        }
    }
    vMedia = vSoma / vLidos;
    cout << "------------------------------------------\n";
    cout << "Somatório: " << vSoma << "\n";
    cout << "Média: " << vMedia << "\n";
    cout << "Total de valores lidos: " << vLidos << "\n";

}