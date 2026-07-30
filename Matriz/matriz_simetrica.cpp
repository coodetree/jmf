#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> mat[i][j];

    bool simetrica = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (mat[i][j] != mat[j][i]) {
                simetrica = false;
                break;
            }
        }
    }
    cout << (simetrica ? "Simetrica\n" : "Nao simetrica\n");
    return 0;
}