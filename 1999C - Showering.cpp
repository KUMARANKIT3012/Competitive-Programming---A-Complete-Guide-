
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s, m;
    cin >> n >> s >> m;

    int prev = 0;
    bool possible = false;

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;

        if (l - prev >= s) {
            possible = true;
        }

        prev = r;
    }

    if (m - prev >= s) {
        possible = true;
    }

    cout << (possible ? "YES" : "NO") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
