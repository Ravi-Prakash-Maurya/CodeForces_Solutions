#include <iostream>
using namespace std;
int main() {
    long long x;
    cin >> x;
    if(x == 1) cout << 1;
    else if(x == 2) cout << 2;
    else if(x % 2 != 0) cout << x * (x - 1) * (x - 2);
    else if(x % 2 == 0 && x % 3 != 0) cout << x * (x - 1) * (x - 3);
    else if(x % 2 == 0 && x % 3 == 0) cout << (x - 1) * (x - 2) * (x - 3);
}