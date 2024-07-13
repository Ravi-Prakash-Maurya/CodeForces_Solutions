#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];
    char c = vec[0][0], t = vec[0][1];
    if (c == t) {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < n; i++)
        if (vec[i][i] != c || vec[i][n - 1 - i] != c) {
            cout << "NO";
            return 0;
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i != j && i + j != n - 1 && vec[i][j] != t) {
                cout << "NO";
                return 0;
            }
    cout << "YES";
    return 0;
}