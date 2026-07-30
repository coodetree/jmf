#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vet = {10, 20, 30, 40, 50};
    int alvo = 30;

    auto it = find(vet.begin(), vet.end(), alvo);
    if (it != vet.end()) cout << "Indice: " << distance(vet.begin(), it) << "\n";
    else cout << "Nao encontrado.\n";
    return 0;
}