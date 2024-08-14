#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, x = 0;
        cin >> n;
        for(int i = 0; i < 2 * n; i++) {
            cin >> a;
            if(a % 2 == 1) x++;
        }
        if(x == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}