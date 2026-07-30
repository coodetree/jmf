#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c, l1, l2; cin >> r >> c >> l1 >> l2;
    vector<vector<int>> mat(r, vector<int>(c));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> mat[i][j];

    swap(mat[l1], mat[l2]);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cout << mat[i][j] << " ";
        cout << "\n";
    }
    return 0;
}