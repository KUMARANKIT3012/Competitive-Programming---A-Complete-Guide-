#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string b;
        cin >> b;

        string a;
        a += b[0];

        for (int i = 1; i < b.size(); i += 2)
            a += b[i];

        if (b.size() % 2 == 1)
            a += b.back();

        cout << a << '\n';
    }

    return 0;
}
