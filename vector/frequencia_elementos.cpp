#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vet = {1, 2, 2, 3, 3, 3, 4};
    unordered_map<int, int> freq;

    for (int x : vet) freq[x]++;
    for (auto const& [elemento, qtd] : freq) {
        cout << "Elemento " << elemento << ": " << qtd << "\n";
    }
    return 0;
}