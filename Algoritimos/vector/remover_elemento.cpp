#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vet = {10, 20, 30, 20, 40, 20, 50};
    int alvo = 20;

    vet.erase(remove(vet.begin(), vet.end(), alvo), vet.end());

    for (int x : vet) cout << x << " ";
    cout << "\n";
    return 0;
}