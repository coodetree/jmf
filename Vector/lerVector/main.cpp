#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> lista;
    for(int i = 0; i <= 10; i++){
        lista.push_back(i);
       
    }
    for(int y: lista){
        cout << y <<" ";
    }
    return 0;
}