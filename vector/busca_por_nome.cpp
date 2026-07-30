#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> caderneta = {"Ana", "Beatriz", "Carlos", "Lucas"};
    string busca = "Beatriz";

    auto it = find(caderneta.begin(), caderneta.end(), busca);
    if (it != caderneta.end()) cout << "Encontrado na posicao " << distance(caderneta.begin(), it) << ".\n";
    else cout << "Nao consta na lista.\n";
    return 0;
}