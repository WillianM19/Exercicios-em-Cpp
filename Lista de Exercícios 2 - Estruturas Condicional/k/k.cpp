#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Insira um número: ";
    cin >> num;

    if(num >= 1 && num <= 9){
        cout << "O valor está na faixa permitida\n";
    } else {
        cout << "O valor está fora da faixa permitida\n";
    }
}