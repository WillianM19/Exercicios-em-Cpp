#include <iostream>
using namespace std;

int main(){
    int anos, meses, dias;
    cout << "Digite a idade (anos): ";
    cin >> anos;
    cout << "Digite os meses: ";
    cin >> meses;
    cout << "Digite os dias: ";
    cin >> dias;

    dias += (anos * 365) + (meses * 30);

    cout << "A idade em dias é: " << dias << "\n";
}