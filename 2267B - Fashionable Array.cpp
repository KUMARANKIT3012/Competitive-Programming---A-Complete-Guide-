#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> cnt(101, 0);

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }

        for (int freq = 1; freq <= n; freq++) {
            for (int x = 100; x >= 1; x--) {
                if (cnt[x] >= freq) {
                    cout << x << " ";
                }
            }
        }

        cout << '\n';
    }

    return 0;
}
