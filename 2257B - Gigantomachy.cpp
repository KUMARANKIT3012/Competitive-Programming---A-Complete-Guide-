#include <iostream>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    long long a1;
    cin >> a1;
    for (int i = 1; i < n; i++) {
        long long temp;
        cin >> temp;
    }
    
    long long b1;
    cin >> b1;
    for (int i = 1; i < m; i++) {
        long long temp;
        cin >> temp;
    }
    
    long long kb = a1 + n - 1;
    long long kv = b1 + m - 1;
    
    if (kv <= kb) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}
