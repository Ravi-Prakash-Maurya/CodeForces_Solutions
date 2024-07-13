#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<string, int> m;
    int t, x = 0;
    string s, k;
    cin >> t >> s;
    for(int i = 0; i < t - 1; i++) {
        string n = s.substr(i, 2);
        m[n]++;
        if(m[n] > x) {
            x = m[n];
            k = n;
        }
    }
    cout << k;
}