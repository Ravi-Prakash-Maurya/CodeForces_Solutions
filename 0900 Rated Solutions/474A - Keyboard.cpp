#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<char, char> R = {{'w','q'},{'e','w'},{'r','e'},{'t','r'},{'y','t'},{'u','y'},{'i','u'},{'o','i'},{'p','o'},
                                   {'s','a'},{'d','s'},{'f','d'},{'g','f'},{'h','g'},{'j','h'},{'k','j'},{'l','k'},{';','l'},
                                   {'x','z'},{'c','x'},{'v','c'},{'b','v'},{'n','b'},{'m','n'},{',','m'},{'.',','},{'/','.'}};
    unordered_map<char, char> L = {{'q','w'},{'w','e'},{'e','r'},{'r','t'},{'t','y'},{'y','u'},{'u','i'},{'i','o'},{'o','p'},
                                   {'a','s'},{'s','d'},{'d','f'},{'f','g'},{'g','h'},{'h','j'},{'j','k'},{'k','l'},{'l',';'},
                                   {'z','x'},{'x','c'},{'c','v'},{'v','b'},{'b','n'},{'n','m'},{'m',','},{',','.'},{'.','/'}};
    char c;
    string s;
    cin >> c >> s;
    if(c == 'R') for(char &i : s) i = R[i];
    else if(c == 'L') for(char &i : s) i = L[i];
    cout << s;
}
