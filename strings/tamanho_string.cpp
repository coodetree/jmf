#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int tam = 0;
    while (s[tam] != '\0') {
        tam++;
    }
    
    cout << "Tamanho: " << tam << "\n";
    return 0;
}