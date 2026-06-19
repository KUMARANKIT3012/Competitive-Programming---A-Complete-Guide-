#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int p;
        cin >> p;

        int x = a[p];

        int leftOps = 0, prev = 0;

        for (int i = 1; i < p; i++) {
            int need = a[i] ^ x;

            if (need != prev)
                leftOps++;

            prev = need;
        }

        int rightOps = 0;
        prev = 0;

        for (int i = n; i > p; i--) {
            int need = a[i] ^ x;

            if (need != prev)
                rightOps++;

            prev = need;
        }

        int ans = max(leftOps, rightOps);

        if (ans & 1)
            ans++;

        cout << ans << '\n';
    }

    return 0;
}
