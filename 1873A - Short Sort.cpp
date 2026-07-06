#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (s == "abc") {
            cout << "YES\n";
            continue;
        }

        bool ok = false;
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 3; j++) {
                string temp = s;
                swap(temp[i], temp[j]);
                if (temp == "abc") {
                    ok = true;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
