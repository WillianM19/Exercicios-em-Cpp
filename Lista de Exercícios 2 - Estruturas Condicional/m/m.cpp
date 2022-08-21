#include <iostream>
using namespace std;

int main(){
    string nome, sexo;
    cout << "Insira o nome: ";
    cin >> nome;
    cout << "Insira o sexo (M ou F): ";
    cin >> sexo;

    if (sexo == "M"){
        cout << "ilmo.Sr " << nome << "\n";
    } else if (sexo == "F"){
        cout << "ilma.Sra " << nome << "\n";
    } else {
        cout << "Sexo informado inválido\n";
    }
}