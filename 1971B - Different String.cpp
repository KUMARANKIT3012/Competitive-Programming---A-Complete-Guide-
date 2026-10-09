#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string t = s;
        sort(t.begin(), t.end());

        if (t == s) {
            reverse(t.begin(), t.end());
        }

        if (t == s) {
            cout << "NO\n";
        } else {
            cout << "YES\n" << t << "\n";
        }
    }

    return 0;
}
