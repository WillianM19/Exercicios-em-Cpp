//a) Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões com
//cinco linhas e três colunas para valores inteiros. Construir uma matriz C de mesma
//dimensão, que seja formada pela soma dos elementos da matriz A com os elementos da
//matriz B. Apresentar os elementos da matriz C.

#include <iostream>
using namespace std;

int main(){
    int A[5][3], B[5][3], C[5][3];

    //Inserir elementos nas matrizes
    cout << "\nMatriz A---------------------------------\n";
    for (int i = 0; i < 5; i++){ //A
        for (int j = 0; j < 3; j++){
            cout << "Digite o elemento da matriz(A[" << i << "," << j << "]): ";
            cin >> A[i][j];
        }
    }
    cout << "\nMatriz B---------------------------------\n";
    for (int i = 0; i < 5; i++){ //B
        for (int j = 0; j < 3; j++){
            cout << "Digite o elemento da matriz(B[" << i << "," << j << "): ";
            cin >> B[i][j];
        }
    }

    //Somar os valores das matrizes A e B para C
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    //Exibir matrizes
    cout << "\nMatriz A:\n";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz B:\n";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz C: (Soma de A e B)\n";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}