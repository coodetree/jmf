#include <iostream>

int main(){

    using namespace std;

    int numero;
    int r; // resto

    cout << "Digite um numero: ";
    cin >> numero;
    int q = numero/2;
    for(int i=1; i <= q/2; i++){
        r = numero % i;
        if(r == 0){
            cout << i << " ";
        }
    }

    cout << "\n";
}