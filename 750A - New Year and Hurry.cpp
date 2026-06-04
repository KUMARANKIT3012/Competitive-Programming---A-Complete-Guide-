#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int timeLeft = 240 - k;
    int solved = 0;
    int total = 0;

    for (int i = 1; i <= n; i++) {
        total += 5 * i;

        if (total <= timeLeft)
            solved++;
        else
            break;
    }

    cout << solved;

    return 0;
}
