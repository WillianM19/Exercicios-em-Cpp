/*i)  Escrever  um  programa  que  apresente  os  valores  da  sequência  numérica  de  Fibonacci 
até o décimo quinto termo. A sequência de Fibonacci é formada pelos valores numéricos 
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ... etc., obtendo-se o próximo termo a 
partir  da  soma  do  termo  atual  com  o  anterior  sucessivamente  até  o  infinito  se  a 
sequência não for interrompida, sendo determinada a partir da fórmula Fn = Fn-1 + Fn-2.*/

#include <iostream>
using namespace std;

int main(){
    int fn, fn1, fn2;
    fn1 = 1;
    fn2 = 0;
    for (int i = 1; i <= 15; i++){
        if (i < 15){
            cout << fn2 << ", ";
        } else {
            cout << fn2 << ".\n";
        }
        fn = fn1 + fn2; //fórmula Fibonacci

        //redefinição de variáveis
        fn1 = fn2;
        fn2 = fn;
    }
    return 0;
}