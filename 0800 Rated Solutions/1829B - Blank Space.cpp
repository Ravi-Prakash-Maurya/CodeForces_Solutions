#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m = 0, c = 0, x;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if(x == 0) c++;
            else m = max(m, c), c = 0;
        }
        m = max(m, c);
        cout << m << endl;
    }
}
