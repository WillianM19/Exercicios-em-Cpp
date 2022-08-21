#include <iostream>
using namespace std;

int main(){
    int N1, N2, N3, N4, NE, MD1, MD2;

    cout << "Insira a primeira nota: ";
    cin >> N1;
    cout << "Insira a segunda nota: ";
    cin >> N2;
    cout <<  "Insira a terceira nota: ";
    cin >> N3;
    cout << "Insira a quarta nota: ";
    cin >> N4;

    MD1 = (N1 + N2 + N3 + N4) / 4;

    if (MD1 >=7){
        cout << "Aprovado!\n";
        cout << "Media: " << MD1 << "\n";
    } else {
        cout << "Insira a quita nota (Exame): ";
        cin >> NE;
        MD2 = (MD1 + NE) / 2;
        if (MD2 >= 5){
            cout << "Aprovado em exame!\n";
        } else {
            cout << "Reprovado!\n";
        }
        cout << "Media: " << MD2 << "\n";
    }
}