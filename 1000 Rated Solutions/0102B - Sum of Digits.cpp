#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    int x = 0;
    cin >> n;
    while(n.size() != 1) {
        x++;
        int y = 0;
        for(char c : n) y += c - '0';
        n = to_string(y);
    }
    cout << x;
}