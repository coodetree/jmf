#include <bits/stdc++.h>
using namespace std;

int meu_atoi(string s) {
    int i = 0, sinal = 1;
    long long res = 0;
    
    while (s[i] == ' ') i++;
    
    if (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-') sinal = -1;
        i++;
    }
    
    while (i < s.size() && isdigit(s[i])) {
        res = res * 10 + (s[i] - '0');
        if (res * sinal > INT_MAX) return INT_MAX;
        if (res * sinal < INT_MIN) return INT_MIN;
        i++;
    }
    return res * sinal;
}

int main() {
    string s;
    cin >> s;
    cout << meu_atoi(s) << "\n";
    return 0;
}