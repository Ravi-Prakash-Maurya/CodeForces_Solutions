#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin >> n;
    unordered_map<char, int> m;
    for(char c : n) m[c]++;
    if(m.size() % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}