//4. Faça  um  programa  que  preencha  aleatório  dois  vetores  de  números  inteiros  com  20 
//números cada. Depois de montados gere um terceiro vetor formado pela diferença dos dois 
//vetores lidos, um quarto vetor formado pela soma dos dois vetores lidos e por último um 
//quinto vetor formado pela multiplicação dos dois vetores lidos

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    srand((unsigned)time(0));

    //range dos números aleatórios
    int maior = 100;
    int menor = 0;

    int aleatorio;
    int tamanhoVetor = 20; //tamanho do vetor
    int v1[tamanhoVetor], v2[tamanhoVetor];
    int v3[tamanhoVetor], v4[tamanhoVetor], v5[tamanhoVetor]; //diferença, soma e multiplicação respectivamente. 

    for (int i = 0; i < tamanhoVetor; i++){ //distribui números aleatórios no vetor
        aleatorio = rand()%(maior-menor+1) + menor;
        v1[i] = aleatorio;
        aleatorio = rand()%(maior-menor+1) + menor;
        v2[i] = aleatorio;
    }

    for (int i = 0; i < tamanhoVetor; i++){ //operações entre vetores
        //diferença
        if (v1[i] > v2[i]){
            v3[i] = v1[i] - v2[i];
        } else {
            v3[i] = v2[i] - v1[i];
        }
        //soma
        v4[i] = v1[i] + v2[i];
        //multiplicação
        v5[i] = v1[i] * v2[i];
    }

    //impressão
    cout << "Vetor original 1: ";
    for (int i = 0; i < tamanhoVetor; i++){ 
        cout << v1[i] << " ";
    }
    cout << "\nVetor original 2: ";
    for (int i = 0; i < tamanhoVetor; i++){ 
        cout << v2[i] << " ";
    }
    cout << "\n\nDiferença entre vetores: ";
    for (int i = 0; i < tamanhoVetor; i++){ 
        cout << v3[i] << " ";
    }
    cout << "\nSoma entre vetores: ";
    for (int i = 0; i < tamanhoVetor; i++){ 
        cout << v4[i] << " ";
    }
    cout << "\nMultiplicação entre vetores: ";
    for (int i = 0; i < tamanhoVetor; i++){ 
        cout << v5[i] << " ";
    }
    cout << endl;
    
    return 0;
}