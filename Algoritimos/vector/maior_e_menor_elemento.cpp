#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vet = {34, 12, 5, 78, 23, 90, 1};
    auto [menor, maior] = minmax_element(vet.begin(), vet.end());

    cout << "Menor: " << *menor << "\nMaior: " << *maior << "\n";
    return 0;
}