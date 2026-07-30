#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    bool ok = equal(s.begin(), s.begin() + s.size() / 2, s.rbegin());
    
    cout << (ok ? "Palindroma\n" : "Nao Palindroma\n");
    return 0;
}