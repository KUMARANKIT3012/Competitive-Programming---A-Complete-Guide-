#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int k;
        cin >> k;

        int cnt2 = 0;
        bool ok = false;

        for (int i = 0; i < k; i++) {
            long long x;
            cin >> x;

            if (x >= 3) ok = true;
            if (x >= 2) cnt2++;
        }

        if (ok || cnt2 >= 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
