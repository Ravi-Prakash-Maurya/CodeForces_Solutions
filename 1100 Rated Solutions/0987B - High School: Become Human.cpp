#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    double x = b * log(a);
    double y = a * log(b);
    if (x < y) cout << '<';
    else if (x > y) cout << '>';
    else cout << '=';
}