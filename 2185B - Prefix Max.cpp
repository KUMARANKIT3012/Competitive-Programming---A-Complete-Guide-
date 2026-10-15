
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int mx = 0, sum = 0;

            for (int j = 0; j < n; j++) {
                mx = max(mx, a[j]);
                sum += mx;
            }

            ans = max(ans, sum);

            for (int j = i + 1; j < n; j++) {
                swap(a[i], a[j]);

                mx = 0;
                sum = 0;

                for (int k = 0; k < n; k++) {
                    mx = max(mx, a[k]);
                    sum += mx;
                }

                ans = max(ans, sum);

                swap(a[i], a[j]);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
