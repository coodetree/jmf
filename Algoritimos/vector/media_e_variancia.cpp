#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<double> vet = {10.0, 12.0, 15.0, 18.0, 20.0};
    double n = vet.size();

    double media = accumulate(vet.begin(), vet.end(), 0.0) / n;
    double soma_quadrados = 0.0;
    for (double x : vet) soma_quadrados += (x - media) * (x - media);
    double variancia = soma_quadrados / n;

    cout << "Media: " << media << "\nVariancia: " << variancia << "\n";
    return 0;
}