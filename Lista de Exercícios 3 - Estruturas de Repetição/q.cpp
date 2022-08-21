/* q)  Escrever um programa que possibilite calcular a área total em metros de uma residência 
com  os  cômodos  sala,  cozinha,  banheiro,  dois  quartos,  área  de  serviço,  quintal, 
garagem,  entre  outros  que  podem  ser  fornecidos  ao  programa.  O  programa  deve 
solicitar  a  entrada  do  nome,  da  largura  e  do  comprimento  de  um  determinado  cômodo. 
Em  seguida,  deve  apresentar  a  área  do  cômodo  lido  e  também  uma  mensagem 
solicitando  ao  usuário  a  confirmação  de  continuar  calculando  novos  cômodos.  Caso  o 
usuário  responda  “NÃO”,  o  programa  deve  apresentar  o  valor  total  acumulado  da  área 
residencial.   */

#include <iostream>
using namespace std;

int main(){
    string comodo, comodos = "| ", resposta = "sim";
    float largura, comprimento, area, areaTotal = 0;

    while (resposta == "sim" || resposta == "s" || resposta == "S") {
        largura = comprimento = area = 0; //reseta variáveis
        cout << "Nome do cômodo: ";
        getline(cin, comodo);
        cout << "Largura do cômodo (em metros): ";
        cin >> largura;
        cout << "Comprimento do cômodo (em metros): ";
        cin >> comprimento;

        area = largura * comprimento;
        areaTotal += area;
        comodos += comodo + " | ";

        cout << "----------------------------------\n";
        cout << "A área do cômodo '" << comodo << "' é de " << area << " metros.\n\n";
        cout << "Deseja adicionar outro cômodo? (sim/não): ";
        cin >> resposta;
        cin.ignore();
    }
    
    cout << "----------------------------------\n";
    cout << "A residência tem área total de " << areaTotal << " metros." << "\n";
    cout << "cômodos inserídos: " << comodos << "\n";
}