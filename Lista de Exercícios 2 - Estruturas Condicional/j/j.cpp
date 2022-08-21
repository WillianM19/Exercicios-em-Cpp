#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Insira um número: ";
    cin >> num;

    if (num % 2 == 0){
        cout << num << " é par!" << "\n";
    } else {
        cout << num << " é ímpar!" << "\n";
    }
    return 0;
}