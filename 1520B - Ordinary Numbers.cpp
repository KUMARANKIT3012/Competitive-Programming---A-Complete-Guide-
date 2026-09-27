#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s = to_string(n);
        int digits = s.size();

        int ans = (digits - 1) * 9;

        int first = s[0] - '0';

        int num = 0;
        for (int i = 0; i < digits; i++) {
            num = num * 10 + first;
        }

        if (num <= n)
            ans += first;
        else
            ans += first - 1;

        cout << ans << '\n';
    }

    return 0;
}
