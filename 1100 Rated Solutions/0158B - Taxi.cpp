#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, a, x = 0;
    cin >> t;
    unordered_map<int, int> m {{1, 0}, {2, 0}, {3, 0}, {4, 0}};
    for(int i = 0; i < t; i++) {
        cin >> a;
        m[a]++;
    }
    x += m[4];
    x += m[3];
    m[1] = max(0, m[1] - m[3]);
    x += m[2] / 2;
    if(m[2] % 2 != 0) {
        x++;
        m[1] = max(0, m[1] - 2);
    }
    x += (m[1] + 3) / 4;
    cout << x << endl;
}