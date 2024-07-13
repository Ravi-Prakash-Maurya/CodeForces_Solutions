#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> q;
    while(m--) {
        string s, t;
        cin >> s >> t;
        q[s] = t;
    }
    cin.ignore();
    string sen, ans, word;
    getline(cin, sen);
    istringstream w(sen);
    while(w >> word) {
        string a = q[word];
        if(a.size() >= word.size()) ans += word;
        else ans += a;
        ans += " ";
    }
    ans.pop_back();
    cout << ans;
}