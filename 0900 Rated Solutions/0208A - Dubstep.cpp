#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    for(int i = s.size() - 1; i > 1; i--)
        if(s[i - 2] == 'W' && s[i - 1] == 'U' && s[i] == 'B') {
            s.replace(i - 2, 3, " ");
            i -= 2;
        }
    while(s[0] == ' ') s.erase(0, 1);
    while(s[s.size() - 1] == ' ') s.erase(s.size() - 1, 1);
    for(int i = s.size() - 1; i > 0; i--)
        if(s[i] == ' ' && s[i - 1] == ' ') s.erase(i, 1);
    cout << s;
}