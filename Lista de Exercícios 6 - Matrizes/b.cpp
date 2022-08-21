//b) Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão para sete
//elementos inteiros. Construir uma matriz C de duas dimensões, cuja primeira coluna deve
//ser formada pelos elementos da matriz A e a segunda coluna pelos elementos da matriz B.
//Apresentar a matriz C.

#include <iostream>
using namespace std;

int main(){
    int A[7], B[7], C[7][2];

    //Inserir elementos nas matrizes
    cout << "\nElementos de A---------------------------------\n";
    for (int i = 0; i < 7; i++){ //A
        cout << "Digite o elemento de A(" << i + 1 << "/7): ";
        cin >> A[i];
    }
    cout << "\nElementos de B---------------------------------\n";
    for (int i = 0; i < 7; i++){ //A
        cout << "Digite o elemento de B(" << i + 1 << "/7): ";
        cin >> B[i];
    }

    //Somar os valores das matrizes A e B para C
    for (int j = 0; j < 2; j++){ //coluna
        for (int i = 0; i < 7; i++){ //linha
           if (j == 0) {
               C[i][j] = A[i];
           } else if (j == 1){
               C[i][j] = B[i];
           }
        }
    }

    //Exibir matriz
    cout << "\nMatriz C:\n";
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 2; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}