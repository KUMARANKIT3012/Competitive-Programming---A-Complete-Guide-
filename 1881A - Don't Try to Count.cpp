#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    int ops = 0;
    while (ops <= 6) {
        if (x.find(s) != string::npos) {
            cout << ops << "\n";
            return;
        }
        x += x;
        ops++;
    }
    cout << -1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
