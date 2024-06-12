#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> vec(n), result(n);
        int x = 1;
        long long c = 0;
        for(int i = 0; i < n; i++) {
            cin >> vec[i];
            x = lcm(x, vec[i]);
        }
        for(int i = 0; i < n; i++) {
            result[i] = x / vec[i];
            c += result[i];
        }
        if(x > c) {
            for(int a : result)
                cout << a << " ";
            cout << endl;
        } else cout << -1 << endl;
    }
}
