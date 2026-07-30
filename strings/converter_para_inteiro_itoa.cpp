#include <bits/stdc++.h>
using namespace std;

string meu_itoa(int num) {
    if (num == 0) return "0";
    string s = "";
    bool neg = num < 0;
    long long n = abs((long long)num);
    
    while (n > 0) {
        s += (n % 10) + '0';
        n /= 10;
    }
    if (neg) s += '-';
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    int n;
    cin >> n;
    cout << meu_itoa(n) << "\n";
    return 0;
}