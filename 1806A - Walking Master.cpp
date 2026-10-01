#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long diagonal = d - b;

        if (diagonal < 0) {
            cout << -1 << '\n';
            continue;
        }

        long long left = diagonal - (c - a);

        if (left < 0) {
            cout << -1 << '\n';
            continue;
        }

        cout << diagonal + left << '\n';
    }

    return 0;
}
