#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x = 0;
    cin >> n;
    vector<int> vec = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for (int i : vec) if (n % i == 0) x = 1;
    cout << (x ? "YES" : "NO");
}
