#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c, n;
        cin >> a >> b >> c >> n;

        long long mx = max({a, b, c});

        long long required = (mx - a) + (mx - b) + (mx - c);

        if (n >= required && (n - required) % 3 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
