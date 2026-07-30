#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& vet) {
    for (auto it = vet.begin(); it != vet.end(); ++it) {
        auto min_it = min_element(it, vet.end());
        iter_swap(it, min_it);
    }
}

int main() {
    vector<int> vet = {29, 64, 73, 12, 9, 21};
    selectionSort(vet);
    for (int x : vet) cout << x << " ";
    cout << "\n";
    return 0;
}