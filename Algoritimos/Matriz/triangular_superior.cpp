#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    bool triangular = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int val; cin >> val;
            if (i > j && val != 0) triangular = false;
        }
    }
    cout << (triangular ? "Triangular Superior\n" : "Nao Triangular Superior\n");
    return 0;
}