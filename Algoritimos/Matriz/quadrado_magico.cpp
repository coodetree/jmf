#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    int alvo = 0, dp = 0, ds = 0;
    vector<int> sl(n, 0), sc(n, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
            sl[i] += mat[i][j];
            sc[j] += mat[i][j];
            if (i == j) dp += mat[i][j];
            if (i + j == n - 1) ds += mat[i][j];
        }
    }

    alvo = dp;
    bool magico = (ds == alvo);
    for (int i = 0; i < n; i++) {
        if (sl[i] != alvo || sc[i] != alvo) magico = false;
    }

    cout << (magico ? "Quadrado Magico\n" : "Nao eh Quadrado Magico\n");
    return 0;
}