#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, h, t, x = 0;
    cin >> n;
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++) {
        cin >> h >> t;
        h = h * 100 + t;
        m[h]++;
        x = max(x, m[h]);
    }
    cout << x;
}
