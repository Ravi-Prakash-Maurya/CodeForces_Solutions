#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n >= 0) cout << n;
    else if(n % 10 <= (n % 100) / 10) cout << n / 10;
    else cout << (n / 100) * 10 + n % 10;
}