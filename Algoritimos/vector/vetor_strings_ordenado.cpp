#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> nomes = {"Lucas", "Ana", "Zeca", "Beatriz", "Carlos"};

    sort(nomes.begin(), nomes.end());

    for (const string &nome : nomes) cout << "- " << nome << "\n";
    return 0;
}