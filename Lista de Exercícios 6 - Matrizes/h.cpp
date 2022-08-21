/* h) Elaborar  um  programa  que  leia  uma  matriz  A  do  tipo  inteira  de  duas  dimensões  com  cinco 
linhas e cinco colunas. - ok

Construir uma matriz B de mesma dimensão, em que cada elemento 
seja  o  dobro  de  cada  elemento  correspondente  da  matriz  A,  com  exceção  dos  valores 
situados  na  diagonal  principal  (posições  B[1,1],  B[2,2],  B[3,3],  B[4,4]  e  B[5,5]),  - ok

os  quais 
devem  ser  o  triplo  de  cada  elemento  correspondente  da  matriz  A.  Apresentar  ao  final  a 
matriz B. - ok*/

#include <iostream>
using namespace std;

int main(){
    int A[5][5], B[5][5];

    ////Inserir elementos na matriz A
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << "Digite o elemento da matriz(A[" << i << "," << j << "]): ";
            cin >> A[i][j];
        }
    }

    //Montar Matriz B
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i == j){ //Diagonal principal (Triplo)
                B[i][j] = A[i][j] * 3;
            } else { //Resto da matriz (Dobro)
                B[i][j] = A[i][j] * 2;
            }
        }
    }

    //Exibir matrizes
    cout << "\nMatriz A:\n";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }    
    cout << "\nMatriz B:\n";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}