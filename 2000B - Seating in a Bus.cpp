
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> vis(n + 2, 0);

        bool ans = true;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vis[a[0]] = 1;

        for (int i = 1; i < n; i++) {
            int x = a[i];

            if (vis[x - 1] == 0 && vis[x + 1] == 0) {
                ans = false;
            }

            vis[x] = 1;
        }

        cout << (ans ? "YES" : "NO") << '\n';
    }

    return 0;
}
