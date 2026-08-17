#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<int> s(4);
        for (int &x : s) cin >> x;

        int a = max(s[0], s[1]);
        int b = max(s[2], s[3]);

        vector<int> v = s;
        sort(v.rbegin(), v.rend());

        if (max(a, b) == v[0] && min(a, b) == v[1])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
