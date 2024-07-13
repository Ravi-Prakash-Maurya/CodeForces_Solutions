#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, c, x = 0, m = INT_MAX;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> c;
            x += c;
            m = min(m, c);
        }
        cout << x - (m * n) << endl;
    }
}