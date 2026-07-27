#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0;

        for (int i = 0; i < n; i++) {
            a[i]++;

            int prod = 1;
            for (int x : a)
                prod *= x;

            ans = max(ans, prod);

            a[i]--;
        }

        cout << ans << '\n';
    }

    return 0;
}
