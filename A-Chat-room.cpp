#include <iostream>
using namespace std;
int main() {
    string s, t = "hello";;
    cin >> s;
    int i = 0, j = 0;
    while(i < s.size())
        if(t[j] == s[i]) {
            i++;
            j++;
        } else i++;
    if(j != 5) cout << "NO";
    else cout << "YES";
}
