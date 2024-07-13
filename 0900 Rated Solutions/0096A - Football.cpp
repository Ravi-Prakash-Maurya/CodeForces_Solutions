#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int z = 0, o = 0;
    for(char c : s) {
        if(c == '0') {
            z++;
            o = 0;
        } else {
            o++;
            z = 0;
        }
        if(z == 7 || o == 7) break;
    }
    if(z == 7 || o == 7) cout << "YES";
    else cout << "NO";
}