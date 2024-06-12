#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int x = 0;
    for(char& c : s) {
        if(c >= 65 && c <= 90) x++;
    }
    if(x == s.size()) {
        for(char& c : s) {
            if(c >= 65 && c <= 90) c += 32;
        }
        cout << s;
    } else if((s[0] >= 97 && s[0] <= 122) && x == s.size() - 1) {
        for(char& c : s) {
            if(c >= 65 && c <= 90) c += 32;
        }
        s[0] -= 32;
        cout << s;
    } else cout << s;
}
