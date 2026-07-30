#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vet(n);
    
    for (int &x : vet) cin >> x;
    for (int x : vet) cout << x << " ";
    cout << "\n";
    return 0;
}