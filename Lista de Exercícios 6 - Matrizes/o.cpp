/* o) Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com oito linhas 
e seis colunas. Construir a matriz B de uma dimensão que seja formada pela soma de cada 
linha da matriz A. Ao final, apresentar o somatório dos elementos da matriz B. */

#include <iostream>
using namespace std;

int main(){
    float A[8][6], B[8], somaLinha = 0;

    //Ler
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 6; j++){
            cout << "Digite o elemento da matriz(A[" << i << "," << j << "]): ";
            cin >> A[i][j];
        }
    }

    //Montar matriz B (Uma dimensão)
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 6; j++){ //Soma das linhas
            somaLinha += A[i][j];
        }
        B[i] = somaLinha;
        somaLinha = 0; //reseta variável auxiliar
    }

    //Exibir
    cout << "\nMatriz A:\n";
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 6; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nMatriz B (Uma dimensão):\n";
    for (int i = 0; i < 8; i++){
        cout << B[i] << " ";
    }
    cout << endl;
    return 0;
}