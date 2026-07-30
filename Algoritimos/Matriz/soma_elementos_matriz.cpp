#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c; cin >> r >> c;
    long long soma = 0;
    for (int i = 0; i < r * c; i++) {
        int x; cin >> x;
        soma += x;
    }
    cout << "Soma: " << soma << "\n";
    return 0;
}