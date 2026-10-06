#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << '\n';
        }
        else if (a < b) {
            if ((a % 2) != (b % 2))
                cout << 1 << '\n';
            else
                cout << 2 << '\n';
        }
        else {
            if ((a % 2) == (b % 2))
                cout << 1 << '\n';
            else
                cout << 2 << '\n';
        }
    }

    return 0;
}
