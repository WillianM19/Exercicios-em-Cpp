//5. Faça um Programa que peça as quatro notas de 10 alunos, calcule e armazene num vetor a média de cada aluno, imprima o número de alunos com média maior ou igual a 7.0

#include <iostream>
using namespace std;

int main(){
    float media[10], n1, n2, n3, n4;

    for (int i = 0; i < 10 ; i++){
        cout << "Aluno " << i + 1 << "--------------------\n";
        cout << "Insira a primeira nota: ";
        cin >> n1;
        cout << "Insira a segunda nota: ";
        cin >> n2;
        cout << "Insira a terceira nota: ";
        cin >> n3;
        cout << "Insira a quarta nota: ";
        cin >> n4;
        media[i] = (n1 + n2 + n3 + n4) / 4;
    }
    cout << "Média dos alunos: ";
    for (int i = 0; i < 10; i++){
        if (i < 9) {
            cout << media[i] << ", ";
        } else {
            cout << media[i] << ".\n";
        }
    }
    return 0;
}