#include <iostream>
using namespace std;
int main() {
    int n, x = 0, y = 1;
    cin >> n;
    while(n > 1) {
        while(y <= n) y *= 2;
        n -= y / 2;
        y = 1;
        x++;
    }
    if(n == 1) x++;
    cout << x;
}