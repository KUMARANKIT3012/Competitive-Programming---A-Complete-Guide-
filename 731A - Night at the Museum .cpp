#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    char curr = 'a';

    for (char c : s) {
        int diff = abs(c - curr);
        ans += min(diff, 26 - diff);
        curr = c;
    }

    cout << ans << endl;

    return 0;
}
