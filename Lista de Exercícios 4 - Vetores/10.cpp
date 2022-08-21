// 10. Faça um algoritmo para preencher um de 20 números. Após isto, deverá ser lido mais um número qualquer e verificar se esse número existe no vetor ou não. Se existir, o algoritmo deve pedir um novo número.

#include <iostream>
using namespace std;

int main(){
    float vetor[20], comparador;
    int aux = 1;
    for (int i = 0; i < 20; i++){
        cout << "Insira o número" << "(" << i + 1 << "/20): ";
        cin >> vetor[i];
    }
    while(aux > 0){
        aux = 0;
        cout << "Insira o número para comparação: ";
        cin >> comparador;

        for (int i = 0; i < 20; i++){
            if(vetor[i] == comparador){
                aux++;
            }
        }
    }
    return 0;
}