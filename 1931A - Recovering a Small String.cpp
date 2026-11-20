#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a = 1, b = 1, c = 1;

        n -= 3;

        int add = min(n, 25);
        c += add;
        n -= add;

        add = min(n, 25);
        b += add;
        n -= add;

        a += n;

        cout << char(a + 'a' - 1)
             << char(b + 'a' - 1)
             << char(c + 'a' - 1) << '\n';
    }
}
