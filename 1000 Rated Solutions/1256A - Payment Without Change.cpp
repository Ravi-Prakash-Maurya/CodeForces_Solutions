#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, n, s, x = 0;
        cin >> a >> b >> n >> s;
        x = a * n;
        if(x <= s) {
            if(x + b < s) cout << "NO" << endl;
            else cout << "YES" << endl;
        } else {
            if(s % n > b) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
}
