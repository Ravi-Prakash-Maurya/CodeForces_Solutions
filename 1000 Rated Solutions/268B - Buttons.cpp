#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x = 0, f = 1;
    for (int i = 0; i < n; i++)
        x += (n - 1 - i) * f++ + 1;
    cout << x;
}
