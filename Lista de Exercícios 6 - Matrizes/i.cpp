/* i) Elaborar  um  programa  que  leia  uma  matriz  A  do  tipo  inteira  de  duas  dimensões  com  sete 
linhas e sete colunas. - ok

Construir a matriz B de mesma dimensão, em que cada elemento seja 
o somatório de 1 até o valor armazenado na posição da matriz A, com exceção dos valores 
situados  nos índices ímpares  da  diagonal  principal  (B[1,1],  B[3,3],  B[5,5]  e  B[7,7]), - ok

os  quais 
devem  ser  o  fatorial  de  cada  elemento  correspondente  da  matriz  A.  Apresentar  ao  final  a 
matriz B. */

#include <iostream>
using namespace std;

int main(){
    unsigned long int A[7][7], B[7][7], auxSoma = 0, fatorial;

    //Inserir elementos na matriz A
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            cout << "Digite o elemento da matriz(A[" << i << "," << j << "]): ";
            cin >> A[i][j];
        }
    }

    //Montar Matriz B
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            if (i == j){ //Diagonal principal (Fatorial)
                fatorial = 1;
                if (A[i][j] == 1 || A[i][j] == 0){
                    fatorial = 1;
                } else {
                    for (int k = 1; k <= A[i][j]; k++){ //calculo fatorial
                        fatorial *= k;
                    }
                }
                B[i][j] = fatorial;
            } else { //Resto da matriz (Soma de elementos)
                for (int k = 1; k <= A[i][j]; k++){ //operação de soma dos elementos
                    auxSoma += k;
                }
                B[i][j] = auxSoma;
                auxSoma = 0;
            }
        }
    }

    //Exibir matrizes
    cout << "\nMatriz A:\n";
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }    
    cout << "\nMatriz B:\n";
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}