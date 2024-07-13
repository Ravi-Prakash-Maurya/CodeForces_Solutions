#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for(char c : s)
            if(c == '1') one++;
            else zero++;
        for(char c : s)
            if(c == '1' && zero > 0) zero--;
            else if(c == '0' && one > 0) one--;
            else break;
        cout << one + zero << endl;
    }
}