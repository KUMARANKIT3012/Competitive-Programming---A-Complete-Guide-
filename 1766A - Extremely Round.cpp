#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        int n;
        cin >> n;

        string s = to_string(n);

        int digits = s.size();
        int firstDigit = s[0] - '0';

        int ans = (digits - 1) * 9 + firstDigit;

        cout << ans << '\n';
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        Solution obj;
        obj.solve();
    }

    return 0;
}
