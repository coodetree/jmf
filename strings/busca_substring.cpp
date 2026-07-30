#include <bits/stdc++.h>
using namespace std;

int meu_strstr(string texto, string padrao) {
    if (padrao.empty()) return 0;
    int n = texto.size(), m = padrao.size();
    
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && texto[i + j] == padrao[j]) j++;
        if (j == m) return i;
    }
    return -1;
}

int main() {
    string t, p;
    cin >> t >> p;
    int pos = meu_strstr(t, p);
    if (pos != -1) cout << "Encontrado no indice: " << pos << "\n";
    else cout << "Nao encontrado\n";
    return 0;
}