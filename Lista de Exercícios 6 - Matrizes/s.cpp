/* s) 

Elaborar  um  programa  que  leia  duas  matrizes  A  e  B,  cada  uma  de  duas  dimensões  com 
cinco linhas e seis colunas. - ok

A matriz A deve aceitar a entrada de valores pares, - ok

enquanto a matriz B deve aceitar a entrada de valores ímpares. - ok

As entradas dos valores nas matrizes A e B devem ser validadas pelo programa, e não pelo usuário. - ok

Construir a matriz C de mesma dimensão,  que  seja  formada  pela  soma  dos  elementos  da  matriz  A  com  os  elementos  da 
matriz B. - ok

Apresentar os elementos da matriz C.  - ok

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int A[5][6], B[5][6], C[5][6];
    int maior = 100, menor = 0, aleatorio;
    srand((unsigned)time(0));

    //Ler A e B
    cout << "Iniciando leitura... ('+' para inserido e '-' para não inserido)\n";
    cout << "\nLendo números aleatórios para matriz A...\n\n";
    for (int i = 0; i < 5; i++){ //Pares
        for (int j = 0; j < 6; j++){
            aleatorio = rand()%(maior-menor+1)+menor;
            if(aleatorio % 2 == 0){
                A[i][j] = aleatorio;
                cout << aleatorio << "+";
            } else { //refaz loop para elemento caso não seja par
                if (j == 0){
                    i--;
                    j = 5;
                } else {
                    j--;
                }
                cout << aleatorio << "-";
            }
            cout << "\t";
        }
    }
    cout << "\n\nLendo números aleatórios para matriz B...\n\n";
    for (int i = 0; i < 5; i++){ //Ímpares
        for (int j = 0; j < 6; j++){
            aleatorio = rand()%(maior-menor+1)+menor;
            if(aleatorio % 2 != 0){
                B[i][j] = aleatorio;
                cout << aleatorio << "+";
            } else { //refaz loop para elemento caso não seja ímpar
                if (j == 0){
                    i--;
                    j = 5;
                } else {
                    j--;
                }
                cout << aleatorio << "-";
            }
            cout << "\t";
        }
    }
    
    //Montar matriz C
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 6; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    
    //Exibir
    cout << "\n\nMatriz A(Pares): \n\n";
    for (int i = 0; i < 5; i++){ //A
        for (int j = 0; j < 6; j++){
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nMatriz B(Ímpares): \n\n";
    for (int i = 0; i < 5; i++){ //B
        for (int j = 0; j < 6; j++){
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nMatriz C(Soma de A e B): \n\n";
    for (int i = 0; i < 5; i++){ //C
        for (int j = 0; j < 6; j++){
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}