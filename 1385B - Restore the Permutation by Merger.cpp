
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(2 * n);
        vector<int> vis(n + 1, 0);

        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < 2 * n; i++) {
            if (vis[a[i]] == 0) {
                cout << a[i] << " ";
                vis[a[i]] = 1;
            }
        }

        cout << endl;
    }

    return 0;
}
