#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, c = 0;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
        c += vec[i];
    }
    sort(vec.begin(), vec.end());
    int m = c / 2, x = 0, s = 0;
    for(int i = vec.size() - 1; i >= 0; i--) {
        s += vec[i];
        x++;
        if(s > m) break;
    }
    cout << x;
}
