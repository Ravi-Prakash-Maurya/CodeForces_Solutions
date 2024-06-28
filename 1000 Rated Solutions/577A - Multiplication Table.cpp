#include <iostream>
using namespace std;
int main() {
    int n, m, j, x = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        if(m % i == 0)
            if(m / i > 0 && m / i <= n) x++;
    cout << x;
}
