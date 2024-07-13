#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int x = 0;
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for(char c : s) m[c]++;
    for(auto pair : m) 
        if(pair.second % 2 == 1) x++;
    if(x % 2 == 1 || x == 0) cout << "First";
    else cout << "Second";
}