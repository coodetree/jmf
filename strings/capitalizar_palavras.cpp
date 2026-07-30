#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    bool nova_palavra = true;
    for (char &c : s) {
        if (c == ' ') {
            nova_palavra = true;
        } else if (nova_palavra) {
            c = toupper(c);
            nova_palavra = false;
        }
    }
    
    cout << s << "\n";
    return 0;
}