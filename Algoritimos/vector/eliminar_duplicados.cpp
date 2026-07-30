#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vet = {4, 1, 2, 1, 3, 2, 4, 5};

    sort(vet.begin(), vet.end());
    vet.erase(unique(vet.begin(), vet.end()), vet.end());

    for (int x : vet) cout << x << " ";
    cout << "\n";
    return 0;
}