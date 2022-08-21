/* n) Elaborar  um  programa  que  leia  uma  matriz  A  de  duas  dimensões  com  sete  linhas  e  sete 
colunas. Ao final, apresentar o total de elementos pares existentes na matriz.  */

#include <iostream>
using namespace std;

int main(){
    int A[7][7], quantPares = 0;

    //Ler
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            cout << "Digite o elemento da matriz(A[" << i << "," << j << "]): ";
            cin >> A[i][j];
        }
    }
    
    //Contar pares da matriz
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            if (A[i][j] % 2 == 0){ //Pares
                quantPares++;
            }
        }
    }
    
    //Exibir
    cout << "\nMatriz A:\n";
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nQuantidade de pares encontrados: " << quantPares << endl;

    return 0;
}