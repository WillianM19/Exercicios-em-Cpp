#include <iostream>
using namespace std;

int main(){
    float nota1, nota2, nota3, media;

    cout << "Insira a primeira nota: ";
    cin >> nota1;
    cout << "Insira a segunda nota: ";
    cin >> nota2;
    cout << "Insira a terceira nota: ";
    cin >> nota3;

    media = ((nota1 * 2)+(nota2 * 3)+(nota3 * 5))/10; //calculo

    cout << "---------------------------\n";
    cout << "A media do aluno é: " << media << "\n";
}