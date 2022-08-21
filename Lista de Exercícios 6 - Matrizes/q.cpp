/* q) Elaborar  um  programa  que  faça  a  leitura  de  20  valores  inteiros  em  uma  matriz  A  de  duas 
dimensões  com  quatro  linhas  e  cinco  colunas.  - ok

Construir  a  matriz  B  de  uma  dimensão  para 
quatro elementos que seja formada pelo somatório dos elementos correspondentes de cada linha da matriz A. - ok

Construir também a matriz C de uma dimensão para cinco elementos que 
seja formada pelo somatório dos elementos correspondentes de cada coluna da matriz A. - ok

Ao final,  o  programa  deve  apresentar  o somatório  dos  elementos  da  matriz B  com  o  somatório 
dos elementos da matriz C
 */

#include <iostream>
using namespace std;

int main(){
    int A[4][5], B[4], C[5], somador = 0, somatorioB = 0, somatorioC = 0;

    //Ler
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            cout << "Digite o elemento da matriz(A[" << i << "," << j << "]): ";
            cin >> A[i][j]; 
        }
    }

    //Montar matriz (uma dimensão) B - Soma de elementos em linha.
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){ //soma da linha
            somador += A[i][j];
        }
        B[i] = somador; 
        somador = 0; //resetar variável auxiliar
        somatorioB += B[i]; //somatório geral de B
    }

    //Montar matriz (uma dimensão) C - Soma de elementos em coluna.
    for (int j = 0; j < 5; j++){
        for (int i = 0; i < 4; i++){ //soma da coluna
            somador += A[i][j];
        }
        C[j] = somador; 
        somador = 0; //resetar variável auxiliar
        somatorioC += C[j]; //somatório geral de C
    }

    //Exibir matrizes
    cout << "\nMatriz A:\n";
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nMatriz B (uma dimensão - Soma dos elementos das linhas):\n";
    for (int i = 0; i < 4; i++){
        cout << B[i] << " ";
    }
    cout << "\n\nMatriz C (uma dimensão - Soma dos elementos das colunas):\n";
    for (int i = 0; i < 5; i++){
        cout << C[i] << " ";
    }
    
    //Exibir somatórios
    cout << "\n\nSomatórios:\n\n";
    cout << "Somatório dos elementos de B: " << somatorioB << endl;
    cout << "Somatório dos elementos de C: " << somatorioC << endl;
    cout << "Somatório geral de B e C: " << somatorioB + somatorioC << endl;

    return 0;
}