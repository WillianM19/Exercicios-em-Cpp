/* l) Elaborar  um  programa  que  leia  uma  matriz  A  de  duas  dimensões  com  15  linhas  e  15 
colunas.  

Apresentar  o  somatório  dos  elementos  pares  situados  na  diagonal  principal  da 
referida matriz. */

#include <iostream>
using namespace std;

int main(){
    int A[15][15], paresSomatorio;

    //Ler
    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 15; j++){
            cout << "Digite o elemento da matriz(A[" << i << "," << j << "]): ";
            cin >> A[i][j];
        }
    }
    
    //Somatório de pares da diagonal principal
    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 15; j++){
            if(i == j && A[i][j] % 2 == 0){ //Pares da diagonal principal
                paresSomatorio += A[i][j];
            }
        }
    }

    //Exibir
    cout << "\nMatriz A:\n";
    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 15; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nSoma dos pares da diagonal principal: " << paresSomatorio << endl;

    return 0;
}