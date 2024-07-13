#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x = 0;
    string s, t;
    unordered_map<string, int> m;
    cin >> n;
    while(n--) {
        cin >> s;
        m[s]++;
    }
    for(auto i : m)
        if(i.second > x) {
            x = i.second;
            t = i.first;
        }
    cout << t;
}