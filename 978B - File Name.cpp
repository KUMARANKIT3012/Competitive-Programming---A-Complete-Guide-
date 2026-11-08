
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'x') {
            count++;

            if (count >= 3) {
                ans++;
            }
        }
        else {
            count = 0;
        }
    }

    cout << ans << endl;

    return 0;
}
