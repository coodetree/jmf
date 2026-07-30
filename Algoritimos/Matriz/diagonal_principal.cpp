#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    long long soma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
            if (i == j) soma += mat[i][j];
        }
    }
    cout << "Diagonal Principal: " << soma << "\n";
    return 0;
}