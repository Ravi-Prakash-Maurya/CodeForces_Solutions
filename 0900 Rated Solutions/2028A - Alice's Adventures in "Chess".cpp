#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b, x = 0, y = 0, f = 0; 
        string s;
        cin >> n >> a >> b >> s;
        for(int i = 0; i < 50; i++) {
            for(auto d : s) {
                if(d == 'N') y++;
                else if(d == 'E') x++;
                else if(d == 'S') y--;
                else x--;
                if(x == a && y == b) {
                    f = 1;
                    break;
                }
            }
            if(f) break;
        }
        cout << (f ? "YES" : "NO") << endl;
    }
}
