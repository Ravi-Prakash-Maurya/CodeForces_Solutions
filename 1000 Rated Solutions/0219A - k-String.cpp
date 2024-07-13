#include <bits/stdc++.h>
using namespace std;
int main() {
    int k;
    string s, t = "", p = "";
    cin >> k >> s;
    unordered_map<char, int> m;
    for(char c : s) m[c]++;
    for(auto pair : m) {
        if(pair.second % k != 0) {
            cout << -1;
            return 0;
        } else t += string(pair.second / k, pair.first);
    }
    for(int i = 0; i < k; ++i) p += t;
    cout << p;
}