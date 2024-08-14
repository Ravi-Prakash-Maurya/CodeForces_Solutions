#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    unordered_set<int> s;
    vector<int> vec;
    for (int i = n - 1; i >= 0; i--)
        if (s.find(a[i]) == s.end()) {
            s.insert(a[i]);
            vec.push_back(a[i]);
        }
    reverse(vec.begin(), vec.end());
    cout << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
    cout << endl;
}