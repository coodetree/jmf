#include <bits/stdc++.h>
using namespace std;

int main() {
    string nome_completo;
    getline(cin, nome_completo);
    
    stringstream ss(nome_completo);
    string primeiro_nome;
    ss >> primeiro_nome;
    
    cout << primeiro_nome << "\n";
    return 0;
}