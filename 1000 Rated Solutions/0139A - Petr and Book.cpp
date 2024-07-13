#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, p, x;
    cin >> n;
    queue<pair<int, int>> q;
    for(int i = 1; i <= 7; i++) {
        cin >> p;
        q.push(make_pair(i, p));
    }
    while(n > 0) {
        pair<int, int> c = q.front();
        q.pop();
        q.push(make_pair(c.first, c.second));
        x = c.first;
        n -= c.second;
    }
    cout << x;
}