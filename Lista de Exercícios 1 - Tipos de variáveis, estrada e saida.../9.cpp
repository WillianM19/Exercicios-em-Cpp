#include <iostream>
using namespace std;

int main(){
    float totalEleitores, votosBrancos, votosNulos, votos;
    cout << "Insira o total de eleitores: ";
    cin >> totalEleitores;
    cout << "\n";
    cout << "Insira a quantidade de votos brancos: ";
    cin >> votosBrancos;
    cout << "Insira a quantidade de votos nulos: ";
    cin >> votosNulos;
    cout << "Insira a quantidade de votos válidos: ";
    cin >> votos;
    cout << "--------------------------------------\n";
    cout << "Total de votos brancos: " << (votosBrancos / totalEleitores) * 100 << "%\n";
    cout << "Total de votos nulos: " << (votosNulos / totalEleitores) * 100 << "%\n";
    cout << "Total de votos válidos: " << (votos / totalEleitores) * 100 << "%\n";
    return 0;
}
