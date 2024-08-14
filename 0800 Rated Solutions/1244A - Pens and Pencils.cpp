#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d, k, x, y;
        cin >> a >> b >> c >> d >> k;
        x = a / c + (a % c != 0 ? 1 : 0);
        y = b / d + (b % d != 0 ? 1 : 0);
        if(x + y > k) cout << -1 << endl;
        else cout << x << " " << y << endl;
    }
}