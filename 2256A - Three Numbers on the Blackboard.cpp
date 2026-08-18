#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long ans = 1e18;

        ans = min(ans, max({a, b, c}) - min({a, b, c}));
        ans = min(ans, max({a, b, a + b}) - min({a, b, a + b}));
        ans = min(ans, max({a, c, a + c}) - min({a, c, a + c}));
        ans = min(ans, max({b, c, b + c}) - min({b, c, b + c}));

        cout << ans << '\n';
    }
}
