#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        long long x = arr[0], y = arr[1];
        for(int i = 2; i < n; i++)
            if (i % 2 == 0) x = gcd(x, arr[i]);
            else y = gcd(y, arr[i]);
        bool fx = true, fy = true;
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0 && arr[i] % y == 0) fy = false;
            if(i % 2 != 0 && arr[i] % x == 0) fx = false;
        }
        if(fx) cout << x << endl;
        else if(fy) cout << y << endl;
        else cout << 0 << endl;
    }
}