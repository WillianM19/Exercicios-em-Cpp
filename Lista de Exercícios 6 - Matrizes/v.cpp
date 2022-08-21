/* v) Elaborar  um  programa  que  faça  a  leitura  de  duas  matrizes  A  e  B  de  duas  dimensões  com 
cinco  linhas  e  cinco  colunas.  - ok

A  matriz  A  deve  ser  formada  por  valores  que  não  sejam 
divisíveis por 3, enquanto a matriz B deve ser formada por valores que não sejam divisíveis 
por 6. - ok

As entradas dos valores nas matrizes devem ser validadas pelo programa, e não pelo 
usuário.  - ok

Construir  e  apresentar  uma matriz  C  de  mesma  dimensão  e  número  de  elementos 
que contenha a soma dos elementos das matrizes A e B. 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int A[5][5], B[5][5], C[5][5];
    int maior = 100, menor = 0, aleatorio;
    srand((unsigned)time(0));

    //Ler A e B
    cout << "Iniciando leitura... ('+' para inserido e '-' para não inserido)\n";
    cout << "\nLendo números aleatórios para matriz A...\n\n";
    for (int i = 0; i < 5; i++){ //Não divisiveis por 3
        for (int j = 0; j < 5; j++){
            aleatorio = rand()%(maior-menor+1)+menor;
            if(aleatorio % 3 != 0){
                A[i][j] = aleatorio;
                cout << aleatorio << "+";
            } else { //refaz loop para elemento caso seja divisivel 3
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
    for (int i = 0; i < 5; i++){ //Não divisiveis por 6
        for (int j = 0; j < 5; j++){
            aleatorio = rand()%(maior-menor+1)+menor;
            if(aleatorio % 6 != 0){
                B[i][j] = aleatorio;
                cout << aleatorio << "+";
            } else { //refaz loop para elemento caso seja divisivel 6
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
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    //Exibir
    cout << "\n\nMatriz A(Não divisiveis por 3): \n\n";
    for (int i = 0; i < 5; i++){ //A
        for (int j = 0; j < 5; j++){
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nMatriz B(Não divisiveis por 6): \n\n";
    for (int i = 0; i < 5; i++){ //B
        for (int j = 0; j < 5; j++){
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nMatriz C(Soma de A e B): \n\n";
    for (int i = 0; i < 5; i++){ //C
        for (int j = 0; j < 5; j++){
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}