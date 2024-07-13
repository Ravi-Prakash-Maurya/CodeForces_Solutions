#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, x = -1, p;
    cin >> n >> m;
    queue<pair<int, int>> q;
    for (int i = 1; i <= n; ++i) {
        cin >> p;
        q.push(make_pair(i, p));
    }
    while (!q.empty()) {
        pair<int, int> c = q.front();
        q.pop();
        if (c.second <= m) x = c.first;
        else q.push(make_pair(c.first, c.second - m));
    }
    cout << x << endl;
}