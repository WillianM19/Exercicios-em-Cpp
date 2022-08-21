/* e) Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão para 12 
elementos  reais.  Construir  uma  matriz  C  de  duas  dimensões,  sendo  a  primeira  coluna  da 
matriz  C  formada  pelos  elementos  da  matriz  A  multiplicados  por  2  e  a  segunda  coluna 
formada  pelos  elementos  da  matriz  B  subtraídos  de  5.  Apresentar  separadamente  as 
matrizes.  */

#include <iostream>
using namespace std;

int main(){
    float A[12], B[12], C[12][2];

    //Ler
    for (int i = 0; i < 12; i++){ //A
        cout << "Digite o valor de A(" << i + 1 << "/12): ";
        cin >> A[i];
    }
    for (int i = 0; i < 12; i++){ //B
        cout << "Digite o valor de B(" << i + 1 << "/12): ";
        cin >> B[i];
    }

    //Montar matriz C
    for (int j = 0; j < 2; j++){//colunas
        for (int i = 0; i < 12; i++){//linhas
            if(j == 0){ //Primeira coluna (matriz  A  multiplicada  por  2)
                C[i][j] = A[i] * 2;
            } else {//Segunda coluna (matriz  B  subtraída  de  5)
                C[i][j] = A[i] - 5;
            }
        }
    }

    //Exibir matrizes
    cout << "\nMatriz A(Uma dimensão):\n";
    for (int i = 0; i < 10; i++){
            cout << A[i] << " ";
    }
    cout << "\n\nMatriz B(Uma dimensão):\n";
    for (int i = 0; i < 10; i++){
            cout << B[i] << " ";
    }
    cout << "\n\nMatriz C:\n";
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 2; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}