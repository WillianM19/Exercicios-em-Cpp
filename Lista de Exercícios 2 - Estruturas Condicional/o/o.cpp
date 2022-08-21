#include <iostream>
using namespace std;

int main(){
    int num, total;
    cout << "Insira um número: ";
    cin >> num;

    total = num * 2;

    if (total > 30) {
        cout << "O resultado é " << total << "\n";
    }
}