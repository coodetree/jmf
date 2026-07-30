#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vet = {10, 20, 30, 40, 50};
    int alvo = 40;

    if (binary_search(vet.begin(), vet.end(), alvo)) {
        auto it = lower_bound(vet.begin(), vet.end(), alvo);
        cout << "Posicao: " << distance(vet.begin(), it) << "\n";
    } else {
        cout << "Nao encontrado.\n";
    }
    return 0;
}