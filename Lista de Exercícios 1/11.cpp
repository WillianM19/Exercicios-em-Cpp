#include <iostream>
using namespace std;

int main(){
    float custoFrabrica, custoFinal;
    float pDistribuidor = 0.28;
    float pImpostos = 0.45;

    cout << "Insira o custo de fabrica: ";
    cin >> custoFrabrica;
    
    custoFinal = custoFrabrica + ((custoFrabrica * pImpostos)+(custoFrabrica * pDistribuidor)); //calculo

    cout << "O custo final é " << custoFinal << "\n";
}