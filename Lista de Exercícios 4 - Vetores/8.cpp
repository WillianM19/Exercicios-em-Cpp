//08. Faça um algoritmo para ler 15 números e armazenar em um vetor VET, verificar e escrever se existem 
//números repetidos no vetor VET e em que posições se encontram
#include <iostream>
using namespace std;

int main(){
    float VET[15], aux;

    for (int i = 0; i < 15; i++){ //ler números
        cout << "Insira o valor" << "(" << i + 1 << "/15): ";
        cin >> VET[i];
    }
    cout << "\nVetor VET-------------------------------\n\n";
    for (int i = 0; i < 15; i++){ //ler números
        if ( i < 14){
            cout << VET[i] << ", ";
        } else {
            cout << VET[i] << ".\n";
        }
    }
    cout << "\nRepetições--------------------------\n\n";
    for (int i = 0; i < 15; i++){
        for (int i2 = 0; i2 < 15; i2++) {
            if (VET[i] == VET[i2] && i != i2 && i < i2){
                cout << "Valor: " << VET[i] << " - VET" << "(" << i << "," << i2 << ")\n";
                aux++;
            }
        }
    }
    cout << "\nQuantidade de repetições " << aux << endl;
    return 0;
}
