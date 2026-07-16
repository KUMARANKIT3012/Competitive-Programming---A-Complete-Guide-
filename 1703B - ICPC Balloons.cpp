#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<bool> vis(26, false);
        int ans = 0;

        for (char c : s) {
            if (!vis[c - 'A']) {
                ans += 2;
                vis[c - 'A'] = true;
            } else {
                ans += 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
