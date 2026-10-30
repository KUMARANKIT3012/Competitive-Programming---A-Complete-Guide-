#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int cnt[4] = {0};

        for (int i = 0; i < n; i++) {
            cnt[i % 4]++;
        }

        if (cnt[0] == cnt[3] && cnt[1] == cnt[2]) {
            cout << "Bob\n";
        } else {
            cout << "Alice\n";
        }
    }

    return 0;
}
