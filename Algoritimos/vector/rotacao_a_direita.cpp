#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vet = {1, 2, 3, 4, 5};
    int k = 2;
    k %= vet.size(); 

    rotate(vet.rbegin(), vet.rbegin() + k, vet.rend());
    for (int x : vet) cout << x << " ";
    cout << "\n";
    return 0;
}