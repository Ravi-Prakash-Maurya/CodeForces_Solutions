#include <iostream>
using namespace std;
int main() {
    int t, x;
    cin >> t;
    while(t--) {
        cin >> x;
        if(x / 2020 < x % 2020) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}