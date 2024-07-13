#include <iostream>
using namespace std;
int main() {
    int a, b, c = 0, x = 0;
    cin >> a >> b;
    while(a) {
        c += a;
        x += a;
        a = c / b;
        c = c % b;
    }
    cout << x;
}