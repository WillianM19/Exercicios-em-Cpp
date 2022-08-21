/* f) Elaborar um programa que leia uma matriz A de duas dimensões com cinco linhas e quatro 
colunas. Construir uma matriz B de mesma dimensão, em que cada elemento seja o fatorial 
de cada elemento correspondente armazenado na matriz A. Apresentar ao final as matrizes 
A e B. */

#include <iostream>
using namespace std;

int main(){
    unsigned long int A[5][4], B[5][4], fatorial = 1;

    ////Inserir elementos na matriz A
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            cout << "Digite o elemento da matriz(A[" << i << "," << j << "]): ";
            cin >> A[i][j];
        }
    }

    //Montar matriz B
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            fatorial = 1;
            if (A[i][j] == 1 || A[i][j] == 0){
                fatorial = 1;
            } else {
                for (int k = 1; k <= A[i][j]; k++){ //calculo fatorial
                    fatorial *= k;
                }
            }
            B[i][j] = fatorial;
        }
    }

    //Exibir matrizes
    cout << "\nMatriz A:\n";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }    
    cout << "\nMatriz B: (Fatorial)\n";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}