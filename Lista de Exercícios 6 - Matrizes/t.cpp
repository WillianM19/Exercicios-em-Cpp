/* t) Elaborar um programa que leia duas matrizes A e B de duas dimensões com quatro linhas e 
cinco  colunas. - ok

A  matriz  A  deve  ser  formada  por  valores  divisíveis  por  3  e  4,  enquanto  a 
matriz  B  deve  ser  formada  por  valores  divisíveis  por  5  ou  6.  - ok

As  entradas  dos  valores  nas 
matrizes  devem  ser  validadas  pelo  programa,  e  não  pelo  usuário.  - ok

Construir  e  apresentar  a 
matriz  C  de  mesma  dimensão  e  número  de  elementos  que  contenha  a  subtração  dos 
elementos da matriz A em relação aos elementos da matriz B. - ok */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int A[4][5], B[4][5], C[4][5];
    int maior = 100, menor = 0, aleatorio;
    srand((unsigned)time(0));

    //Ler A e B
    cout << "Iniciando leitura... ('+' para inserido e '-' para não inserido)\n";
    cout << "\nLendo números aleatórios para matriz A...\n\n";
    for (int i = 0; i < 4; i++){ //Divisiveis por 3 e 4
        for (int j = 0; j < 5; j++){
            aleatorio = rand()%(maior-menor+1)+menor;
            if(aleatorio % 3 == 0 && aleatorio % 4 == 0){
                A[i][j] = aleatorio;
                cout << aleatorio << "+";
            } else { //refaz loop para elemento caso não seja divisivel por 3 e 4
                if (j == 0){
                    i--;
                    j = 4;
                } else {
                    j--;
                }
                cout << aleatorio << "-";
            }
            cout << "\t";
        }
    }
    
    cout << "\n\nLendo números aleatórios para matriz B...\n\n";
    for (int i = 0; i < 4; i++){ //Divisiveis por 5 e 6
        for (int j = 0; j < 5; j++){
            aleatorio = rand()%(maior-menor+1)+menor;
            if(aleatorio % 5 == 0 && aleatorio % 6 == 0){
                B[i][j] = aleatorio;
                cout << aleatorio << "+";
            } else { //refaz loop para elemento caso não seja divisivel por 3 e 4
                if (j == 0){
                    i--;
                    j = 4;
                } else {
                    j--;
                }
                cout << aleatorio << "-";
            }
            cout << "\t";
        }
    }

    //Montar matriz C
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    //Exibir
    cout << "\n\nMatriz A(divisiveis por 3 e 4): \n\n";
    for (int i = 0; i < 4; i++){ //A
        for (int j = 0; j < 5; j++){
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nMatriz B(divisiveis por 5 e 6): \n\n";
    for (int i = 0; i < 4; i++){ //B
        for (int j = 0; j < 5; j++){
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nMatriz C(Subtração de A e B): \n\n";
    for (int i = 0; i < 4; i++){ //C
        for (int j = 0; j < 5; j++){
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
    
    
    return 0;
}