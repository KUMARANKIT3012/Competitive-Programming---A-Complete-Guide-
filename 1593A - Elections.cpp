#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long x = max(b, c);
        long long y = max(a, c);
        long long z = max(a, b);

        cout << max(0LL, x - a + 1) << " "
             << max(0LL, y - b + 1) << " "
             << max(0LL, z - c + 1) << "\n";
    }

    return 0;
}
