#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    bool apenas_num = all_of(s.begin(), s.end(), ::isdigit);
    
    cout << (apenas_num ? "Apenas numeros\n" : "Contem outros caracteres\n");
    return 0;
}