//06. Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outrosvetores.

#include <iostream>
using namespace std;

int main(){
    int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int v2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int v3[20];
    int v3Index = 0;
    for (int i = 0; i < 10; i++){
        v3[v3Index] = v1[i];
        v3Index++;
        v3[v3Index] = v2[i];
        v3Index++;
    }
    for (int i = 0; i < 20; i++){
        if (i < 19){
            cout << v3[i] << ", ";
        } else {
            cout << v3[i] << ".\n";
        }
    }
    return 0;
}