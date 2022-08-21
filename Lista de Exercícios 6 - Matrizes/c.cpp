//c) Elaborar um programa que leia 20 elementos para uma matriz qualquer, considerando que
//essa matriz tenha o tamanho de quatro linhas por cinco colunas. Em, seguida, apresentar a
//matriz.

#include <iostream>
using namespace std;

int main(){
    int MAT[4][5];

    ////Inserir elementos na matriz
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            cout << "Digite o elemento da matriz(MAT[" << i << "," << j << "]): ";
            cin >> MAT[i][j];
        }
    }

    //Exibir matriz
    cout << "\nMatriz MAT:\n";
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            cout << MAT[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}