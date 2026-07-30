#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& vet) {
    int n = vet.size();
    for (int i = 0; i < n - 1; ++i) {
        bool trocou = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (vet[j] > vet[j + 1]) {
                swap(vet[j], vet[j + 1]);
                trocou = true;
            }
        }
        if (!trocou) break;
    }
}

int main() {
    vector<int> vet = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(vet);
    for (int x : vet) cout << x << " ";
    cout << "\n";
    return 0;
}