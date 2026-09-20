#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        int cnt[3] = {};

        for (int i = 0; i < 3; i++) {
            cin >> s;
            for (char c : s) {
                if (c != '?')
                    cnt[c - 'A']++;
            }
        }

        for (int i = 0; i < 3; i++) {
            if (cnt[i] == 2) {
                cout << char('A' + i) << '\n';
                break;
            }
        }
    }
}
