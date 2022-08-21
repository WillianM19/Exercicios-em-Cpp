#include <iostream>
using namespace std;

int main(){
    float salario, reajuste, salarioTotal;
    cout << "Insira o salário atual: ";

    cin >> salario;
    cout << "Insira o percentual de reajuste: ";
    cin >> reajuste;

    salarioTotal = salario + (salario * (reajuste / 100)); //calculo de reajuste

    cout << "O salário com reajuste é: " << salarioTotal << "\n";
    return 0;
}