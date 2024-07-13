#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    vector<int> vec(t);
    for(int i = 0; i < t; i++) cin >> vec[i];
    sort(vec.begin(), vec.end());
    int x = INT_MAX;
    for(int i = 0; i <= t - n; i++) x = min(x, vec[i + n - 1] - vec[i]);
    cout << x;
}