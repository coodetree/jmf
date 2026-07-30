#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c; cin >> r >> c;
    double soma_quadrados = 0;
    for (int i = 0; i < r * c; i++) {
        double val; cin >> val;
        soma_quadrados += val * val;
    }
    cout << fixed << setprecision(4) << "Norma: " << sqrt(soma_quadrados) << "\n";
    return 0;
}