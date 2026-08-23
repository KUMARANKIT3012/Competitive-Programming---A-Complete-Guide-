#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int maxi = 0;
        int ans = 0;

        for (int x = 2; x <= n; x++) {
            int sum = 0;

            for (int j = x; j <= n; j += x) {
                sum += j;
            }

            if (sum > maxi) {
                maxi = sum;
                ans = x;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
