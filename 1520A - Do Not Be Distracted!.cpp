#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool ok = true;
        vector<bool> visited(26, false);

        visited[s[0] - 'A'] = true;

        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                if (visited[s[i] - 'A']) {
                    ok = false;
                    break;
                }
                visited[s[i] - 'A'] = true;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
