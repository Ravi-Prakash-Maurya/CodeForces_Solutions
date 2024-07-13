#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    string s;
    while(t--) {
        int x = 0, y = 0;
        cin >> s;
        for(char i : s)
            if(i == '1') x++;
            else y++;
        x = min(x, y);
        if(x % 2) cout << "DA" << endl;
        else cout << "NET" << endl;
    }
}
