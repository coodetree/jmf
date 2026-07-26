#include <iostream>

/*
divisores proprios de um numero sao todos os seus divesores 
menos ele mesmo
Ex.: 8 DP{1,2,4}
*/

int main(){
    using namespace std;
    int n;
    int s = 0;

    cout << "Digite um numero: ";
    cin >> n;

    int metade_n = n/2;
    for(int i = 1; i <= metade_n; i++){

        if(n % i == 0){
            s +=i;
        }
    }
    cout << "A soma dos divisores proprios de " << n << " vale " << s;
    cout << "\n";
}