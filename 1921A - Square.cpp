#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int minX = INT_MAX, maxX = INT_MIN;

        for (int i = 0; i < 4; i++) {
            int x, y;
            cin >> x >> y;

            minX = min(minX, x);
            maxX = max(maxX, x);
        }

        int side = maxX - minX;

        cout << side * side << '\n';
    }

    return 0;
}
