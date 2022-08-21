//2. Dados dois vetores de tamanho N, faça um algoritmo que diga se eles possuem conteúdo igual. Se existir, imprima o valor e os índices.

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    
    srand((unsigned)time(0));
    int maior = 50;
    int menor = 10;
    int tamanhoVetor, conteudoVetor;
    tamanhoVetor = rand()%(maior-menor+1) + menor;
    
    int vetor1[tamanhoVetor];
    int vetor2[tamanhoVetor];
    
    for(int i = 0; i < tamanhoVetor; i++){ //preeche vetor1
        conteudoVetor = rand()%(maior-menor+1) + menor;
        vetor1[i] = conteudoVetor;
    }
    for(int i = 0; i < tamanhoVetor; i++){ //preeche vetor2
        conteudoVetor = rand()%(maior-menor+1) + menor;
        vetor2[i] = conteudoVetor;
    }
    cout << "Vetor 1: ";
    for (int i = 0; i < tamanhoVetor; i++){
        if (i < (tamanhoVetor - 1)){
            cout << vetor1[i] << ", ";
        } else {
            cout << vetor1[i] << ".\n\n";
        }
    }
    cout << "Vetor 2: ";
    for (int i = 0; i < tamanhoVetor; i++){
        if (i < (tamanhoVetor - 1)){
            cout << vetor2[i] << ", ";
        } else {
            cout << vetor2[i] << ".\n\n";
        }
    }
    
    cout << "Tamanho dos Vetores: " << tamanhoVetor << endl;
    
    for (int i = 0; i < tamanhoVetor; i++){
        for(int j = 0; j < tamanhoVetor; j++){
            if(vetor1[i] == vetor2[j]){
                cout << "--------------------------------------------\n";
                cout << "Valor: " << vetor1[i] << endl;
                cout << "Repetido na posição: (vetor1[" << i << "]/vetor2[" << j << "])\n";
            }
        }
    }
    
    return 0;
}
