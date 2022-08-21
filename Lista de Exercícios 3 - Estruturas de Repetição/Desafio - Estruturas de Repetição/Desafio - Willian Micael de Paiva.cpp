#include <iostream>
using namespace std;

int main(){
    int A, B, CA, R, CB, E;
    A = 4;
    B = 4;
    CA = 2;
    R = B;

    // O loop só para quando o CA for incrementado suficientemente para ser maior que A
    while(CA <= A){ 
        E = B; // O valor de E é sempre resetado para o valor de B.
        CB = 1; // O mesmo acontece com CB
        while (CB < CA){
            E = E * B; //Multiplica E com B
            CB = CB + 1;
        }
        R = R + E; //Soma o E mutiplicado com B anteriormente, com R.
        CA = CA + 2; //Incrementa mais 2 ao CA
    }
    
    cout << R << "\n\n"; //Imprime R


    //Fibonnaci até 276(Valor de R)
    double anterior, proximo, atual;

    anterior = 1;
    atual = 0;

    for (int i = 1; i <= R; i++){
        if (i < R){ //Vírgula entre número e ponto no final.
            cout << atual << ", ";
        } else {
            cout << atual << ".";
        }

        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

}