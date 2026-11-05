
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int ans = 0;

        int x = a1 + a2;
        int y = a4 - a2;
        int z = a5 - a4;

        int a[3] = {x, y, z};

        for (int i = 0; i < 3; i++) {
            int a3 = a[i];
            int cnt = 0;

            if (a1 + a2 == a3) cnt++;
            if (a2 + a3 == a4) cnt++;
            if (a3 + a4 == a5) cnt++;

            ans = max(ans, cnt);
        }

        cout << ans << endl;
    }

    return 0;
}
