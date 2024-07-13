#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t, x = 0;
    cin >> t >> n;
    vector<int> vec(t);
    for(int i = 0; i < t; i++) cin >> vec[i];
    sort(vec.begin(), vec.end());
    for(int i = 0; i < n; i++) if(vec[i] < 0 ) x -= vec[i];
    cout << x;
}