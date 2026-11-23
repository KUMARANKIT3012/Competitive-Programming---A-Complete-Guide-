#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        int l = INT_MAX, r = INT_MIN;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            l = min(l, a);
            r = max(r, a);
        }

        cout << (r - l + min(abs(x - l), abs(x - r))) << '\n';
    }

    return 0;
}
