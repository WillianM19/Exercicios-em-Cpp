#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Insira um número: ";
    cin >> n;

    if (n < 0){
        n = n * -1;
    }
    
    cout << "O valor positivo é: " << n << "\n";
}