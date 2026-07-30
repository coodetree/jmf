#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c; cin >> r >> c;
    vector<vector<int>> mat(r, vector<int>(c));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> mat[i][j];

    for (int i = 0; i < r; i++) {
        int min_linha = mat[i][0], col_ind = 0;
        for (int j = 1; j < c; j++) {
            if (mat[i][j] < min_linha) {
                min_linha = mat[i][j];
                col_ind = j;
            }
        }
        bool sela = true;
        for (int k = 0; k < r; k++) {
            if (mat[k][col_ind] > min_linha) {
                sela = false; break;
            }
        }
        if (sela) {
            cout << "Ponto de sela encontrado: " << min_linha << " em (" << i << "," << col_ind << ")\n";
            return 0;
        }
    }
    cout << "Nao possui ponto de sela.\n";
    return 0;
}