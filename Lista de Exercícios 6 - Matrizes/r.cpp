/* r) Elaborar  um  programa  que  leia  quatro  matrizes  A,  B,  C  e  D  de  uma  dimensão  com  quatro 
elementos. - ok

Construir uma matriz E de duas dimensões do tipo 4 × 4, sendo a primeira linha 
formada  pelo  dobro  dos  valores  dos  elementos  da  matriz  A,  a  segunda  linha  formada  pelo 
triplo  dos  valores  dos  elementos  da  matriz  B,  a  terceira  linha  formada  pelo  quádruplo  dos 
valores  dos  elementos  da  matriz  C  e  a  quarta  linha  formada  pelo  fatorial  dos  valores  dos 
elementos da matriz D. Apresentar a matriz E. - ok */

#include <iostream>
using namespace std;

int main(){
    int A[4], B[4], C[4], D[4], E[4][4], fatorial;

    //Ler
    for (int i = 0; i < 4; i++){ //A
        cout << "Digite o elemento de A(" << i + 1 << "/4): ";
        cin >> A[i]; 
    }
    for (int i = 0; i < 4; i++){ //B
        cout << "Digite o elemento de B(" << i + 1 << "/4): ";
        cin >> B[i]; 
    }
    for (int i = 0; i < 4; i++){ //C
        cout << "Digite o elemento de C(" << i + 1 << "/4): ";
        cin >> C[i]; 
    }
    for (int i = 0; i < 4; i++){ //D
        cout << "Digite o elemento de D(" << i + 1 << "/4): ";
        cin >> D[i]; 
    }

    //Montar matriz E
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            switch (i){
            case 0: //Primeira linha - Dobro  dos  valores da  matriz  A
                E[i][j] = A[i] * 2;
                break;
            case 1: //Segunda linha - Triplo  dos  valores  da  matriz  B
                E[i][j] = A[i] * 3;
                break;
            case 2: //Terceira linha - Quádruplo  dos valores  da  matriz  C
                E[i][j] = A[i] * 4;
                break;
            case 3: //Fatorial  dos  valores  da matriz D
                fatorial = 1;
                if (D[i] == 1 || D[i] == 0){
                    fatorial = 1;
                } else {
                    for (int k = 1; k <= D[i]; k++){ //calculo fatorial de D
                        fatorial *= k;
                    }
                }
                E[i][j] = fatorial;
                break;
            }
        }
    }

    //Exibir matriz E
    cout << "\nMatriz E:\n";
    for (int i = 0; i < 4; i++){ //linhas
        for (int j = 0; j < 4; j++){ //colunas
            cout << E[i][j] << "\t";
        }
        switch (i){ //informar linhas
        case 0:
            cout << "- Dobro de A";
            break;
        case 1:
            cout << "- Triplo de B";
            break;
        case 2:
            cout << "- Quádruplo de C";
            break;
        case 3:
            cout << "- Fatorial de D";
            break;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}