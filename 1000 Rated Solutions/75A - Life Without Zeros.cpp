#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int c = a + b;
    string r = to_string(a), s = to_string(b), t = to_string(c);
    r.erase(remove(r.begin(), r.end(), '0'), r.end());
    s.erase(remove(s.begin(), s.end(), '0'), s.end());
    t.erase(remove(t.begin(), t.end(), '0'), t.end());
    a = stoi(r), b = stoi(s), c = stoi(t);
    if(a + b == c) cout << "YES";
    else cout << "NO";
}
