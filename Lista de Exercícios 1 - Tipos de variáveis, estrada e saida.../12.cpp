/* 12. Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês,
mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele
efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de
suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário
final do vendedor. */

#include <iostream>
using namespace std;

int main(){
    int carrosVendidos;
    float salarioFixo, comissaoPorCarro, valorVendas, salarioFinal;
    cout << "Carros vendidos: ";
    cin >> carrosVendidos;
    cout << "Valor total das vendas: ";
    cin >> valorVendas;
    cout << "Salário fixo mensal: ";
    cin >> salarioFixo;
    cout << "Valor recebido por carro vendido: ";
    cin >> comissaoPorCarro;

    salarioFinal = salarioFixo + (carrosVendidos * comissaoPorCarro) + (valorVendas * 0.05); //calculo

    cout << "-----------------------------------\n";
    cout << "O salário final do funcionário é : " << salarioFinal << "\n";
}