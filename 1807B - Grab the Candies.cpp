#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int evenSum = 0, oddSum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x % 2 == 0)
                evenSum += x;
            else
                oddSum += x;
        }

        if (evenSum > oddSum)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
