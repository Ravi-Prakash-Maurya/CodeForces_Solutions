#include <iostream>
using namespace std;
int main() {
    int n, m, x = 0;
    cin >> n >> m;
    if(m % n == 0) {
        m /= n;
        while(m % 2 == 0) {
            m /= 2;
            x++;
        }
        while(m % 3 == 0) {
            m /= 3;
            x++;
        }
        if(m == 1) cout << x;
        else cout << -1;
    }
    else cout << -1;
}
