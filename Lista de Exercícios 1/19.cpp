#include <iostream>
using namespace std;

int main(){
    int velocidade, distancia, tempo;
    cout << "Insira a distância: ";
    cin >> distancia;
    cout << "Insira o tempo: ";
    cin >> tempo;

    velocidade = (distancia * 1000) / (tempo * 60); //calculo

    cout << "\nA velocidade é " << velocidade << " metros por segundo." << "\n";
}