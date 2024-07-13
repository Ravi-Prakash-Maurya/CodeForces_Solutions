#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x = 0, y = 0;
    string s;
    cin >> n >> s;
    for(char c : s)
        if(c == '1') x++;
        else if(c == '0') y++;
    cout << abs(x - y);
}