#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while(b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, x = 0;
        cin >> n;
        vector<int> even, odd;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a % 2 == 1) odd.push_back(a);
            else even.push_back(a);
        }
        if(even.size() > 0 && odd.size() > 0) x += even.size() * odd.size();
        if(even.size() > 1) x += (even.size() * (even.size() - 1)) / 2;
        if(odd.size() > 1)
            for(int i = 0; i < odd.size() - 1; i++)
                for(int j = i + 1; j < odd.size(); j++)
                    if(gcd(odd[i], odd[j]) > 1) x++;
        cout << x << endl;
    }
}