#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vet = {10, 20, 30, 40, 50};
    int novo = 25;

    auto it = upper_bound(vet.begin(), vet.end(), novo);
    vet.insert(it, novo);

    for (int x : vet) cout << x << " ";
    cout << "\n";
    return 0;
}