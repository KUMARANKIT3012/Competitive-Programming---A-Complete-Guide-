#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = (k * l) / nl;
    int totalLime = c * d;
    int totalSalt = p / np;

    int totalToasts = min({totalDrink, totalLime, totalSalt});

    cout << totalToasts / n;

    return 0;
}
