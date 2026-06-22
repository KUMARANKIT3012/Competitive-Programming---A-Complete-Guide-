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

        int curr = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == 0) {
                curr++;
                ans = max(ans, curr);
            } else {
                curr = 0;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
