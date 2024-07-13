#include <iostream>
using namespace std;
int main() {
    long long n, m, c = 1, t, x = 0;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> t;
        if(t >= c) x += t - c;
        else x += n - c + t;
        c = t;
    }
    cout << x;
}