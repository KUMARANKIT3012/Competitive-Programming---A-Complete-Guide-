#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        int a[3] = {x, y, z};
        sort(a, a + 3);

        if (a[1] != a[2]) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << a[2] << " " << a[0] << " " << a[0] << "\n";
        }
    }

    return 0;
}
