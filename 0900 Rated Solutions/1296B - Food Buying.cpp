#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int s, x = 0;
        cin >> s;
        while (s >= 10) {
            x += (s / 10) * 10;
            s = s - ((s / 10) * 10) + (((s / 10) * 10) / 10);
        }
        x += s;
        cout << x << endl;
    }
}
