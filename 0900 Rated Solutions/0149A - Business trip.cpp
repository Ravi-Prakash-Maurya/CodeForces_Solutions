#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x = 0, t = 0;
    vector<int> vec(12);
    cin >> n;
    for(int i = 0; i < 12; i++) cin >> vec[i];
    sort(vec.rbegin(), vec.rend());
    for(int i = 0; i < 12; i++) {
        if(x >= n) break;
        else {
            x += vec[i];
            t++;
        }
    }
    if(x >= n) cout << t;
    else cout << -1;
}