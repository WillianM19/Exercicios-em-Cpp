#include <iostream>
using namespace std;

int main(){
    int N1, N2, N3, N4, media;
    cout << "Insira a primeira nota: ";
    cin >> N1;
    cout << "Insira a segunda nota: ";
    cin >> N2;
    cout <<  "Insira a terceira nota: ";
    cin >> N3;
    cout << "Insira a quarta nota: ";
    cin >> N4;

    media  = (N1 + N2 + N3 + N4) / 4;

    cout << "A media do aluno é: " << media << "\n";
    if (media >= 5){
        cout << "Aprovado!\n";
    } else {
        cout << "Reprovado!\n";
    }
}