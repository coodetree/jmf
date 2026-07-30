#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string res = "";
    unordered_set<char> visto;
    
    for (char c : s) {
        if (visto.find(c) == visto.end()) {
            visto.insert(c);
            res += c;
        }
    }
    
    cout << res << "\n";
    return 0;
}