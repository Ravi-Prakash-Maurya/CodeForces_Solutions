#include <bits/stdc++.h>
using namespace std;
bool mn(const string& n) {
    regex p("^(144|14|1)*$");
    return regex_match(n, p);
}
int main() {
    string n;
    cin >> n;
    if (mn(n)) cout << "YES";
    else cout << "NO";
}