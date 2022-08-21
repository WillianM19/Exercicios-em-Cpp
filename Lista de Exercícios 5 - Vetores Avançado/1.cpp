//1. Utilizando vetores, crie um programa que organize uma quantidade qualquer de números inteiros fornecidos de forma aleatória da seguinte forma: 
//primeiro os números pares em ordem crescente e depois os números ímpares em ordem decrescente.

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    srand((unsigned)time(0));

    //range dos números aleatórios
    int maior = 100;
    int menor = 0;

    int aleatorio;
    int tamanhoVetor = 10; //tamanho do vetor
    int v[tamanhoVetor];
    int vTemp[tamanhoVetor], vTempIndex = 0, quantPares = 0, swap;

    for (int i = 0; i < tamanhoVetor; i++){ //distribui números aleatórios no vetor
        aleatorio = rand()%(maior-menor+1) + menor;
        v[i] = aleatorio;
    }
    
    cout << "Vetor original: ";//mostra resultado inicial do vetor
    for (int i = 0; i < tamanhoVetor; i++){ 
        cout << v[i] << " ";
    }
    
    //Ordenação

    for (int i = 0; i < tamanhoVetor; i++){ //pares
        if (v[i] % 2 == 0){
            vTemp[vTempIndex] = v[i];
            vTempIndex++;
            quantPares++;
        }
    }

    for (int i = 0; i < tamanhoVetor; i++){ //ímpares
        if (v[i] % 2 != 0){
            vTemp[vTempIndex] = v[i];
            vTempIndex++;
        }
    }

    for (int i = 0; i < quantPares; i++){ // Ordem crescente nos pares
        for (int j = i + 1; j < quantPares; j++){
            if(vTemp[j] < vTemp[i] ){
                //swap
                swap = vTemp[i];
                vTemp[i] = vTemp[j];
                vTemp[j] = swap;
            }
        }
    }

    for (int i = quantPares; i < tamanhoVetor; i++){ // Ordem decrescente nos ímpares
        for (int j = i + 1; j < tamanhoVetor; j++){
            if(vTemp[j] > vTemp[i] ){
                //swap
                swap = vTemp[i];
                vTemp[i] = vTemp[j];
                vTemp[j] = swap;
            }
        }
    }

    for (int i = 0; i < tamanhoVetor; i++){ //Passa os valores do vetor temporário para o original
        v[i] = vTemp[i];
    }
    
    cout << "\nVetor ordenado: ";
    for (int i = 0; i < tamanhoVetor; i++){ //mostra resultado final do vetor
        cout << v[i] << " ";
    }
    return 0;
}