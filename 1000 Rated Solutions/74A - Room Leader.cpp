#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, p, m, a, b, c, d, e, f(-2501);
    string s, t;
    cin >> n;
    while(n--) {
        cin >> s >> p >> m >> a >> b >> c >> d >> e;
        int x = p * 100 - m * 50 + a + b + c + d + e;
        if (x > f) {
            t = s;
            f = x;
        }
    }
    cout << t;
}
