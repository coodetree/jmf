#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vet = {-1, 5, -10, 22, -3, 0};

    transform(vet.begin(), vet.end(), vet.begin(), [](int x) { return abs(x); });

    for (int x : vet) cout << x << " ";
    cout << "\n";
    return 0;
}