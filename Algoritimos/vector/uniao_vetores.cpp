#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2 = {3, 4, 5, 6};

    set<int> uniao(v1.begin(), v1.end());
    uniao.insert(v2.begin(), v2.end());

    for (int x : uniao) cout << x << " ";
    cout << "\n";
    return 0;
}