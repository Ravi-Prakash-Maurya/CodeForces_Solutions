#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int d = 1, x = 0;
    while(n--) {
        x++;
        if(d % m == 0) n++;
        d++;
    }
    cout << x;
}
