/* d) Elaborar um programa que leia uma matriz A de uma dimensão com dez elementos inteiros. 
Construir  uma  matriz  C  de  duas  dimensões  com  três  colunas,  sendo  a  primeira  coluna  da 
matriz  C  formada  pelos elementos  da  matriz  A  somados  com  5,  a segunda  coluna formada 
pelo valor do cálculo da fatorial de cada elemento correspondente da matriz A e a terceira e 
última  coluna  pelos  quadrados  dos  elementos  correspondentes  da  matriz  A.  Apresentar  a 
matriz C. */

#include <iostream>
using namespace std;

int main(){
    int A[10];
    int C[10][3];
    int fatorial = 1;

    //Ler
    for (int i = 0; i < 10; i++){
        cout << "Digite o valor de A(" << i + 1 << "/10): ";
        cin >> A[i];
    }

    //Montar matriz C
    for (int j = 0; j < 3; j++){//colunas
        for (int i = 0; i < 10; i++){//linhas
            switch (j){
            case 0://Primeira coluna (Soma com 5) - ok
                C[i][j] = A[i] + 5;
                break;
            case 1://Segunda coluna (Fatorial) - ok
                fatorial = 1;
                if (A[i] == 1 || A[i] == 0){
                    fatorial = 1;
                } else {
                    for (int k = 1; k <= A[i]; k++){ //calculo fatorial
                        fatorial *= k;
                    }
                }
                C[i][j] = fatorial;
                break;          
            case 2://Terceira coluna (Quadrado dos elementos) - ok
                C[i][j] = A[i] * A[i];
                break;
            }
        }
    }

    //Exibir matriz
    cout << "\nMatriz C:\n";
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 3; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}