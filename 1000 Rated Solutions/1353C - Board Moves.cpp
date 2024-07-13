#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        long long x = 0, y = 1, z = 1;
        for(long long i = 3; i <= n; i += 2) {
            x += ((i * i) - (y * y)) * z;
            y = i;
            z++;
        }
        cout << x << endl;
    }
}