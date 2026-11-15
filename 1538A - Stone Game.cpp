
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        int mn = INT_MAX, mx = INT_MIN;
        int l = 0, r = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] < mn) {
                mn = a[i];
                l = i;
            }

            if (a[i] > mx) {
                mx = a[i];
                r = i;
            }
        }

        int ans = min({
            max(l, r) + 1,
            n - min(l, r),
            l + 1 + n - r,
            r + 1 + n - l
        });

        cout << ans << endl;
    }

    return 0;
}
