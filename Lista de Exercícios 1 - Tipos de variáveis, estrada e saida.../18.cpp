#include <iostream>
using namespace std;

int main(){
    int numero, antecessor, sucessor;
    cout << "Digite um número: ";
    cin >> numero;

    antecessor = numero - 1;
    sucessor = numero + 1;

    cout << "Numero: " << numero << "\n";
    cout << "Antecessor: " << antecessor << "\n";
    cout << "Sucessor: " << sucessor << "\n\n";
    cout << "..." << antecessor << ", " << numero << ", " << sucessor << "..." << "\n";
}