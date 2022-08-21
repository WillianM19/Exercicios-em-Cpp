/* w)  Elaborar  um  programa  que  leia  uma  matriz  A  do  tipo  inteira  de  duas  dimensões  com  cinco 
linhas e cinco colunas. 

Construir uma matriz B de mesma dimensão, em que cada elemento 
seja  o  dobro  de  cada  elemento  correspondente  da  matriz  A,  com  exceção  dos  valores 
situados na diagonal inversa (posições B[1,5], B[2,4], B[3,3], B[4,2] e B[5,1]), os quais devem 
ser o triplo de cada elemento correspondente da matriz A. Apresentar ao final a matriz B.  */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int A[5][5], B[5][5];
    int maior = 100, menor = 0; //range de números aleatórios
    srand((unsigned)time(0));

    //Ler
    for (int i = 0; i < 5; i++){ //gerador de número aleatórios (Alterado a 1, para melhor visualização)
        for (int j = 0; j < 5; j++){
            A[i][j] = 1 /* rand()%(maior-menor+1)+menor */;
        }
    }
    
    //Montar matriz B
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i == 4 - j && j == 4 - i){ //Triplo de A (Diagonal invertida)
                B[i][j] = A[i][j] * 3;
            } else { //Dobro de A
                B[i][j] = A[i][j] * 2;
            }
        }
    }

    //Exibir
    cout << "\nMatriz A:\n";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nMatriz B:\n";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}