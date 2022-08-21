/* Faça um algoritmo para calcular a distância entre dois pontos. Entre com o valor de X1, X2, Y1,
Y2 */
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x1, y1, x2, y2, distancia;
    cout << "Insira as codernadas do primeiro ponto\n";
    cout << "x: ";
    cin >> x1;
    cout << "y: ";
    cin >> y1;
    cout << "-----------------------------------------\n";
    cout << "Insira as codernadas do segundo ponto\n";
    cout << "x: ";
    cin >> x2;
    cout << "y: ";
    cin >> y2;
    cout << "-----------------------------------------\n";

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "A distancia entre os pontos é: " << distancia << "\n";
    return 0;
}