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

        bool odd = true, even = true;

        for (int i = 2; i < n; i += 2) {
            if (a[i] % 2 != a[0] % 2)
                odd = false;
        }

        for (int i = 3; i < n; i += 2) {
            if (a[i] % 2 != a[1] % 2)
                even = false;
        }

        cout << (odd && even ? "YES" : "NO") << '\n';
    }

    return 0;
}
