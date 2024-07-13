#include <iostream>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n;
    while(n--) {
        cin >> s;
        int x = 1, y = 0;
        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] == '0' && s[i + 1] == '1') y++;
            else if(s[i] == '1' && s[i + 1] == '0') x++;
        }
        if(y == 0) cout << x << endl;
        else cout << x + y - 1 << endl;
    }
}