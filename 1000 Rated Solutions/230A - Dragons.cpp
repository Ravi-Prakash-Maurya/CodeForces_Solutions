#include <bits/stdc++.h>
using namespace std;
int main() {
    bool f = true;
    int s, n, a, b;
    cin >> s >> n;
    vector<pair<int, int>> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        vec[i] = {a, b};
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < n; i++) {
        if(s > vec[i].first) s += vec[i].second;
        else {
            f = false;
            break;
        }
    }
    if(f) cout << "YES";
    else cout << "NO";
}
