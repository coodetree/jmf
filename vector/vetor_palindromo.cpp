#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vet = {1, 2, 3, 2, 1};
    bool eh_palindromo = equal(vet.begin(), vet.begin() + vet.size() / 2, vet.rbegin());
    cout << (eh_palindromo ? "Sim\n" : "Nao\n");
    return 0;
}