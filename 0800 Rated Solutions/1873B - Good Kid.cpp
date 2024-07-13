#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    while(q--) {
        int t, c = 1, x = 0, m = INT_MAX, n;
        cin >> t;
        while(t--) {
            cin >> n;
            if(n == 0) x++;
            else c *= n;
            m = min(m, n);
        }
        if(x > 1) cout << 0 << endl;
        else if(x == 1) cout << c << endl;
        else cout << (c / m) * (m + 1) << endl;
    }
}
