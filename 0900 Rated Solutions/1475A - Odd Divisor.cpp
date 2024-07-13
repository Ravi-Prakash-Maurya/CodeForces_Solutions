#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, x = 2;
        cin >> n;
        if(n % 2 == 1) cout << "YES" << endl;
        else {
            bool f = false;
            while(n >= x) {
                if(n == x) f = true;
                x *= 2;
            }
            if(f) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
}