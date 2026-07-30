#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int vogais = 0, consoantes = 0;
    string v = "aeiouAEIOU";
    
    for (char c : s) {
        if (isalpha(c)) {
            if (v.find(c) != string::npos) vogais++;
            else consoantes++;
        }
    }
    
    cout << "Vogais: " << vogais << "\nConsoantes: " << consoantes << "\n";
    return 0;
}