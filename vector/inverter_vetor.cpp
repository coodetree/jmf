#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vet = {1, 2, 3, 4, 5};
    reverse(vet.begin(), vet.end());

    for (int x : vet) cout << x << " ";
    cout << "\n";
    return 0;
}