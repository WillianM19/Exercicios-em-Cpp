/* m)  Elaborar  um  programa  que  leia  uma  matriz  A  do  tipo  real  de  duas  dimensões  com  cinco 
linhas e cinco colunas. Apresentar o somatório dos elementos situados nas posições de linha 
e coluna ímpares da diagonal principal (A[1,1], A[3,3], A[5,5]) da referida matriz. 

Obs: A posição A[5,5] não existe já que os indices de uma matriz 5,5 iniciam em 0, seu final é A[4,4].
*/

#include <iostream>
using namespace std;

int main(){
    float A[5][5], somatorio;
    
    //Ler
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << "Digite o elemento da matriz(A[" << i << "," << j << "]): ";
            cin >> A[i][j];
        }
    }

    //Somatório da diagonal principal (linha/coluna ímpares)
    cout << "\nPosições encontradas: ";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i == j && i % 2 !=0 && j % 2 != 0){ //Diagonal principal apenas indices ímpares
                somatorio += A[i][j];
                cout << "A[" << i << "," << j << "] = " << A[i][j] << "  ";
            }
        }
    }
    cout << endl;

    //Exibir
    cout << "\nMatriz A:\n";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nSomatório de elementos da diagonal principal (Indices ímpares): " << somatorio << endl;

    return 0;
}