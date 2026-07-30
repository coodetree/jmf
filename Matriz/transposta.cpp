#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c; cin >> r >> c;
    vector<vector<int>> mat(r, vector<int>(c));
    vector<vector<int>> transposta(c, vector<int>(r));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];
            transposta[j][i] = mat[i][j];
        }
    }

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) cout << transposta[i][j] << " ";
        cout << "\n";
    }
    return 0;
}