#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n >> s;

        char mx = 'a';

        for (char c : s) {
            mx = max(mx, c);
        }

        cout << mx - 'a' + 1 << '\n';
    }

    return 0;
}
