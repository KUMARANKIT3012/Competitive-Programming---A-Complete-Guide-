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

        int sum = 0, x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            sum += x;
        }

        cout << (sum % 2 == 0 ? "YES\n" : "NO\n");
    }

    return 0;
}
