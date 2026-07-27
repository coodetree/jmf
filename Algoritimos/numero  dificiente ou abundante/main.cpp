#include <iostream>
using namespace std;

int main(){
    int n= 6;
    int soma =0;

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            soma += i;
        }
    }
    if(soma >= n)
    {
        cout << "abundante";
    }else{
        cout << "dificiente";
    }
    cout << "\n";

}
