#include <iostream>

int main(){
    using namespace std;

    // Minhas variaveis
    int numero = 9;
    bool ehpar = false;

    // Divisao e substracao
    int quociente = numero / 2;
    /*
    se um numero é considerado para quando o resto da divisao resulta em zero.
    logo> conclui que a a subtracao do numero dado menos a multiplicaao do quaciente com 2
    resultaria no mesmo numero. o mesmo processo para um numero impar resultaria em 1.
    */
    int substracao = numero - quociente*2;

    // como o nosso ehpar ja é falso so precisamos verificar cado for verdadeiro
    if(substracao == 0){
        ehpar = true;
    }

    // monstrar resultdo
    cout << "O numero é par: " << ehpar;
    cout <<"\n";

    return 0;
    

}