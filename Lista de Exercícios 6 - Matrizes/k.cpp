/* k) Elaborar  um  programa  que  leia  uma  matriz  A  do  tipo  real  de  duas  dimensões  com  cinco 
linhas e cinco colunas. Apresentar o somatório dos elementos situados na diagonal principal 
(posições A[1,1], A[2,2], A[3,3], A[4,4] e A[5,5]) da referida matriz. */

#include <iostream>
using namespace std;

int main(){
    float A[5][5], somatorio = 0;

    //Ler
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << "Digite o elemento da matriz(A[" << i << "," << j << "]): ";
            cin >> A[i][j];
        }
    }

    //Somatório
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if(i == j){ //Diagonal Principal (Somatório)
                somatorio += A[i][j];
            }
        }
    }

    //Exibir
    cout << "\nMatriz A:\n";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nSomatório da diagonal principal: "<< somatorio << endl;

    return 0;
}