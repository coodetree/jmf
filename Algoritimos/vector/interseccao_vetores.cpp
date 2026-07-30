#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5}, v2 = {3, 4, 5, 6, 7}, res;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(res));

    for (int x : res) cout << x << " ";
    cout << "\n";
    return 0;
}