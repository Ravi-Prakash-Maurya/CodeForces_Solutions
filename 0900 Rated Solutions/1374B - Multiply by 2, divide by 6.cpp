#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x = 0;
        cin >> n;
        while (n > 1 && n % 6 == 0) {
            n /= 6;
            x++;
        }
        while (n > 1 && n % 3 == 0) {
            n /= 3;
            x += 2;
        }
        if(n == 1) cout << x << endl;
        else cout << -1 << endl;
    }
}