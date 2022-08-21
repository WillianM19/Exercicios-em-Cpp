/* g)  Elaborar  um  programa  que  apresente  os  resultados  das  potências  do  valor  de  base  3, 
elevado a um expoente que varie do valor 0 até o valor 15. O programa deve apresentar 
os  valores  1,  3,  9.  27,  ...,  14.348.907.  Sugestão:  leve  em  consideração  as  definições 
matemáticas do cálculo de potência, em que qualquer valor numérico diferente de zero 
elevado a zero é 1, e todo valor numérico elevado a 1 é ele próprio. Não use o operador 
aritmético  de  exponenciação  apresentado  no  Capítulo  3;  resolva  o  problema  com  a 
técnica de laço.  */

#include <iostream>
using namespace std;

int main(){ 
    int valor = 3;
    int aux = 1;
    for (int i = 0; i <= 15; i++){ //muda o expoente
        for(int v = 0; v < i; v++){ //multiplica a base
            aux *= valor;
        }

        if (valor != 0 && i == 0){ // Checa se é zero
            aux = 1;
        } else if (i == 1){ // Checa se é um
            aux = valor;
        }

        if (i < 15){
            cout << aux << ", ";
        } else {
            cout << aux << ".\n";
        }
        
        aux = 1; //reseta auxiliar
    }
}