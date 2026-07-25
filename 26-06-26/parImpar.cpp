#include <iostream>

int main(){
    using namespace std;

    int numero;

    cout <<"Digite o numero: ";
    cin >> numero;

    if(numero % 2 == 0){
            cout << numero << " Ehpar";
    }else{
        cout <<numero << " nao é par";
    }
    cout<<"\n";

return 0;

}