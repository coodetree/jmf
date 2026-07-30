#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c; cin >> r >> c;
    vector<vector<int>> mat(r, vector<int>(c));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> mat[i][j];

    int t = 0, b = r - 1, l = 0, d = c - 1;
    while (t <= b && l <= d) {
        for (int i = l; i <= d; i++) cout << mat[t][i] << " ";
        t++;
        for (int i = t; i <= b; i++) cout << mat[i][d] << " ";
        d--;
        if (t <= b) {
            for (int i = d; i >= l; i--) cout << mat[b][i] << " ";
            b--;
        }
        if (l <= d) {
            for (int i = b; i >= t; i--) cout << mat[i][l] << " ";
            l++;
        }
    }
    cout << "\n";
    return 0;
}