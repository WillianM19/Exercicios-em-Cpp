#include <iostream>
using namespace std;

int main(){
    int A, B, C, D, E, maior, menor;
    cout << "Insira o valor de A: ";
    cin >> A; 
    cout << "Insira o valor de B: ";
    cin >> B;
    cout << "Insira o valor de C: ";
    cin >> C;
    cout << "Insira o valor de D: ";
    cin >> D;
    cout << "Insira o valor de E: ";
    cin >> E;    

    //Checa o maior
    maior = A;
    if (maior < B){
        maior = B;
    }
    if (maior < C){
        maior = C;
    }
    if (maior < D){
        maior = D;
    }
    if (maior < E){
        maior = E;
    }
    //Checa o Menor
    menor = A;
    if (menor > B){
        menor = B;
    }
    if (menor > C){
        menor = C;
    }
    if (menor > D){
        menor = D;
    }
    if (menor > E){
        menor = E;
    }

    cout << "------------------------\n";
    cout << "Maior: " << maior << "\n";
    cout << "Menor: " << menor << "\n";
}