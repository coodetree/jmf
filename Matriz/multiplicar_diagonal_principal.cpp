#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
            if (i == j) mat[i][j] *= k;
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}