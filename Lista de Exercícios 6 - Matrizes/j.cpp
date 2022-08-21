/* j) Elaborar  um  programa  que  leia  uma  matriz  A  de  duas  dimensões  com  seis  linhas  e  cinco 
colunas. Construir a matriz B de mesma dimensão, que deve ser formada do seguinte modo: 
para cada elemento par da matriz A deve ser somado 5 e de cada elemento ímpar da matriz 
A deve ser subtraído 4. Apresentar ao final as matrizes A e B.  */

#include <iostream>
using namespace std;

int main(){
    int A[6][5], B[6][5];

    //Inserir elementos na matriz A
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 5; j++){
            cout << "Digite o elemento da matriz(A[" << i << "," << j << "]): ";
            cin >> A[i][j];
        }
    }

    //Montar matriz B
    for (int i = 0; i < 6; i ++){
        for (int j = 0; j < 5; j++){
            if (A[i][j] % 2 == 0){ //Par (Soma com 5)
                B[i][j] = A[i][j] + 5;
            } else { //Ímpar (Subtrai 4)
                B[i][j] = A[i][j] - 4;
            }
        }
    }

    //Exibir matrizes
    cout << "\nMatriz A:\n";
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 5; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }    
    cout << "\nMatriz B:\n";
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 5; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}