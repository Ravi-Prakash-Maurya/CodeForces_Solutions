#include <iostream>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    int i = 0;
    int j = s.size() - 1;
    while(i < j) {
        char c = s[j];
        s[j] = s[i];
        s[i] = c;
        i++;
        j--;
    }
    if(s == t) cout<<"YES";
    else cout<<"NO";
}
