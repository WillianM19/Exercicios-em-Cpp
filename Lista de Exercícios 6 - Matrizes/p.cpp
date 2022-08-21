/* p) Elaborar  um  programa  que  leia  uma  matriz  A  de  duas  dimensões  com  dez  linhas  e  sete 
colunas. - ok

Ao  final,  apresentar  o  total  de  elementos  pares  e  ímpares  existentes  na  matriz. - ok


Apresentar  também  o  percentual  de  elementos  pares  e  ímpares  em  relação  ao  total  de 
elementos da matriz. Supondo a existência de 20 elementos pares e 50 elementos ímpares, 
haveria 28,6% de elementos pares e 71,4% de elementos ímpares.  - ok

*/

#include <iostream>
using namespace std;

int main(){
    int A[10][7], quantPares = 0, quantImpares = 0, percPares, percImpares;

    //Ler
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 7; j++){
            cout << "Digite o elemento da matriz(A[" << i << "," << j << "]): ";
            cin >> A[i][j]; 
        }
    }

    //Calcula pares e ímpares
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 7; j++){
            if (A[i][j] % 2 == 0){ //par
                quantPares++;
            } else { //ímpar
                quantImpares++;
            }
        }
    }
    
    //Calcula porcentagem
    percPares = ((quantPares*100)/(quantPares+quantImpares));
    percImpares = ((quantImpares*100)/(quantPares+quantImpares));
    
    //Exibir
    cout << "\nMatriz A:\n";
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 7; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nQuantidade de Pares: " << quantPares;
    cout << "\nQuantidade de ímpares: " << quantImpares;
    cout << "\nPercentual de Pares: " << percPares << "%";
    cout << "\nPercentual de ímpares: " << percImpares << "%";
    cout << endl;

    return 0;
}