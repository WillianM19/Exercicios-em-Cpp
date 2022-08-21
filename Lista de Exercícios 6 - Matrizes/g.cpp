/* g) Elaborar um programa que leia uma matriz A de duas dimensões com quatro linhas e cinco 
colunas, armazenando nessa matriz os valores das temperaturas em graus Celsius. 
Construir a matriz B de mesma dimensão, em que cada elemento seja o valor da 
temperatura em graus Fahrenheit de cada elemento correspondente da matriz A. Apresentar 
ao final as matrizes A e B. */

#include <iostream>
using namespace std;

int main(){
    float A[4][5], B[4][5];

    ////Inserir elementos na matriz A
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            cout << "Digite o elemento da matriz(A[" << i << "," << j << "]): ";
            cin >> A[i][j];
        }
    }

    //Montar matriz B
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            B[i][j] = (A[i][j] * 1.8) + 32;
        }
    }

    //Exibir matrizes
    cout << "\nMatriz A: (Celsius)\n";
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }    
    cout << "\nMatriz B: (Fahrenheit)\n";
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}